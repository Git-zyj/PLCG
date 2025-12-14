#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)3;
unsigned long long int var_2 = 2389325217188502168ULL;
signed char var_5 = (signed char)111;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned char var_17 = (unsigned char)190;
unsigned char var_18 = (unsigned char)106;
unsigned short var_19 = (unsigned short)39797;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
