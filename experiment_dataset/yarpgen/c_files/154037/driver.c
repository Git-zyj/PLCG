#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13464464009863518832ULL;
unsigned int var_3 = 3646007521U;
unsigned short var_4 = (unsigned short)22572;
int var_5 = -326017666;
short var_6 = (short)-5993;
unsigned long long int var_8 = 6812630061369528469ULL;
unsigned int var_12 = 1291579322U;
unsigned long long int var_14 = 16443447115425931570ULL;
int zero = 0;
unsigned int var_15 = 1286775857U;
unsigned char var_16 = (unsigned char)107;
unsigned short var_17 = (unsigned short)21765;
unsigned short var_18 = (unsigned short)56254;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
