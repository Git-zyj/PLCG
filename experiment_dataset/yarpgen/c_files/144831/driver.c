#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)53840;
int var_6 = -475443353;
unsigned long long int var_8 = 15863910954093114500ULL;
unsigned int var_9 = 1577125097U;
unsigned short var_10 = (unsigned short)27412;
_Bool var_11 = (_Bool)0;
unsigned long long int var_18 = 12369692821080947293ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)114;
int var_20 = 955208590;
void init() {
}

void checksum() {
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
