#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -7402207439120292594LL;
unsigned int var_7 = 3410760707U;
signed char var_8 = (signed char)-122;
unsigned long long int var_10 = 11788968576716385539ULL;
unsigned short var_13 = (unsigned short)60710;
int zero = 0;
unsigned long long int var_14 = 12616204623782686440ULL;
unsigned long long int var_15 = 13946423919596515042ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
