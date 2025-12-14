#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
int var_8 = -1178996129;
long long int var_11 = -4504261982683694012LL;
unsigned short var_12 = (unsigned short)35641;
int zero = 0;
long long int var_16 = 8261679227849094329LL;
short var_17 = (short)-11196;
unsigned long long int var_18 = 501277294558886937ULL;
unsigned short var_19 = (unsigned short)2385;
unsigned short var_20 = (unsigned short)45001;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
