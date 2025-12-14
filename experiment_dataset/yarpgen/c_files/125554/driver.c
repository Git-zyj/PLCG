#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -559730679;
int var_2 = -940181833;
short var_3 = (short)4480;
int var_4 = 1394568796;
int var_5 = 233185048;
int var_6 = 665515070;
int var_9 = 1093261936;
int zero = 0;
short var_10 = (short)22275;
short var_11 = (short)-7055;
int var_12 = 1342302903;
short var_13 = (short)7418;
int var_14 = -318970863;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
