#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3102886636168120331ULL;
long long int var_5 = 8777359133960399201LL;
unsigned short var_9 = (unsigned short)46024;
int var_12 = -156161460;
int var_14 = 1667369603;
unsigned long long int var_15 = 1572990393714207609ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)17833;
unsigned short var_18 = (unsigned short)4999;
unsigned short var_19 = (unsigned short)20337;
unsigned short var_20 = (unsigned short)43490;
void init() {
}

void checksum() {
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
