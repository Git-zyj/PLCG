#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)55798;
unsigned short var_8 = (unsigned short)47614;
unsigned char var_10 = (unsigned char)86;
unsigned long long int var_12 = 12179576663795878697ULL;
short var_14 = (short)12636;
unsigned long long int var_15 = 17717561456173901906ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)1346;
long long int var_19 = 3450250375209581696LL;
long long int var_20 = 6102938865623620000LL;
unsigned short var_21 = (unsigned short)7619;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
