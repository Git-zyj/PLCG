#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -497423242;
signed char var_1 = (signed char)123;
unsigned short var_3 = (unsigned short)2568;
unsigned int var_7 = 2200096573U;
unsigned short var_11 = (unsigned short)45777;
long long int var_12 = 3408820869258140642LL;
_Bool var_13 = (_Bool)1;
int zero = 0;
long long int var_19 = -5865758640438489722LL;
unsigned long long int var_20 = 6395362132710589625ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
