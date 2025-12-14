#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)7102;
unsigned char var_2 = (unsigned char)89;
int var_3 = -1000170783;
_Bool var_4 = (_Bool)0;
unsigned char var_7 = (unsigned char)43;
unsigned int var_8 = 608598798U;
int var_9 = -979364804;
int var_12 = -1859275943;
int var_13 = 1871369278;
signed char var_16 = (signed char)-107;
int zero = 0;
unsigned char var_17 = (unsigned char)75;
int var_18 = 1141781635;
int var_19 = 2057196631;
int var_20 = 1224658820;
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
