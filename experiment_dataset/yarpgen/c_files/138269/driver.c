#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6326869640041315162ULL;
unsigned long long int var_3 = 12962687973208909453ULL;
int var_6 = -445675140;
unsigned long long int var_7 = 138694021461987267ULL;
unsigned long long int var_9 = 9634668020177698957ULL;
int var_13 = 2014177374;
int zero = 0;
short var_14 = (short)5128;
unsigned long long int var_15 = 14230017802296285028ULL;
unsigned long long int var_16 = 7009216303993697342ULL;
short var_17 = (short)-32180;
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
