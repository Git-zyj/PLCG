#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)44;
unsigned char var_6 = (unsigned char)216;
short var_7 = (short)22566;
short var_9 = (short)916;
int var_12 = -1149958691;
int zero = 0;
signed char var_14 = (signed char)-73;
unsigned short var_15 = (unsigned short)57126;
unsigned short var_16 = (unsigned short)43355;
unsigned long long int var_17 = 9841839460346947869ULL;
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
