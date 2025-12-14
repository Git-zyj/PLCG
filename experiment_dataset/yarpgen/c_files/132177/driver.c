#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)130;
unsigned char var_3 = (unsigned char)202;
short var_12 = (short)16728;
short var_13 = (short)30879;
int var_15 = -506269543;
int zero = 0;
signed char var_16 = (signed char)-105;
short var_17 = (short)17488;
unsigned int var_18 = 326179295U;
unsigned int var_19 = 3230333020U;
int var_20 = -137214590;
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
