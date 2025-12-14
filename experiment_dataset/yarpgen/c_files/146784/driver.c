#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7097200098105455296LL;
_Bool var_2 = (_Bool)0;
_Bool var_11 = (_Bool)1;
long long int var_12 = 5333939442228760358LL;
unsigned long long int var_13 = 15521335259420434619ULL;
int zero = 0;
long long int var_14 = -8254408128619359911LL;
long long int var_15 = 4763447321678557470LL;
unsigned long long int var_16 = 3561564193909508336ULL;
short var_17 = (short)10396;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
