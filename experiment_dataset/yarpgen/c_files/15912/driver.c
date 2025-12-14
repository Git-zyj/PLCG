#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5498155436344987824LL;
unsigned char var_2 = (unsigned char)251;
unsigned char var_3 = (unsigned char)176;
unsigned char var_4 = (unsigned char)158;
signed char var_8 = (signed char)-73;
long long int var_11 = -4924158868151426410LL;
unsigned char var_12 = (unsigned char)117;
int var_13 = -1331891950;
unsigned char var_14 = (unsigned char)37;
unsigned int var_15 = 2854629015U;
unsigned char var_16 = (unsigned char)66;
int zero = 0;
unsigned short var_17 = (unsigned short)22368;
_Bool var_18 = (_Bool)0;
int var_19 = 294451273;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
