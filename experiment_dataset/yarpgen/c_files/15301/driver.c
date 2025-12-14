#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2273812720U;
_Bool var_3 = (_Bool)0;
unsigned char var_5 = (unsigned char)154;
short var_8 = (short)31501;
signed char var_9 = (signed char)-61;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 4053515935U;
long long int var_12 = -8466491736843648668LL;
unsigned short var_13 = (unsigned short)39164;
int zero = 0;
long long int var_14 = 3418394108212387088LL;
signed char var_15 = (signed char)-55;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 1700347334U;
signed char var_18 = (signed char)-32;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
