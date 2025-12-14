#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_12 = -2188826281175354983LL;
long long int var_16 = 3524432191160007288LL;
int zero = 0;
unsigned long long int var_17 = 8981891076712374755ULL;
unsigned char var_18 = (unsigned char)121;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
