#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)55319;
unsigned char var_2 = (unsigned char)154;
signed char var_3 = (signed char)61;
unsigned short var_4 = (unsigned short)39440;
unsigned char var_5 = (unsigned char)201;
short var_7 = (short)-19031;
signed char var_8 = (signed char)9;
int var_9 = 1658278163;
int zero = 0;
unsigned char var_10 = (unsigned char)93;
unsigned long long int var_11 = 14980906643135810673ULL;
unsigned int var_12 = 1163147626U;
unsigned int var_13 = 1643447548U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
