#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4012551528153319542ULL;
short var_2 = (short)17205;
unsigned int var_3 = 3941984586U;
short var_8 = (short)6385;
short var_9 = (short)17943;
unsigned short var_11 = (unsigned short)64406;
int var_12 = -1211717700;
unsigned int var_15 = 1630922119U;
unsigned char var_17 = (unsigned char)15;
int zero = 0;
int var_20 = 2029951352;
unsigned int var_21 = 1227559538U;
int var_22 = -1259103425;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
