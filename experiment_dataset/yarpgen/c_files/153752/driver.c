#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-15338;
long long int var_4 = 7973927248243145413LL;
unsigned char var_5 = (unsigned char)198;
int var_9 = -858806774;
unsigned char var_12 = (unsigned char)110;
_Bool var_17 = (_Bool)0;
int zero = 0;
int var_18 = -1027683162;
unsigned long long int var_19 = 7926573132030131481ULL;
unsigned int var_20 = 2426766820U;
unsigned long long int var_21 = 8756208621853297181ULL;
unsigned short var_22 = (unsigned short)57653;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
