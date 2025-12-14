#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1979464342;
unsigned int var_3 = 981231340U;
signed char var_4 = (signed char)-1;
_Bool var_6 = (_Bool)0;
long long int var_7 = 8043018674253329728LL;
unsigned short var_8 = (unsigned short)40439;
_Bool var_10 = (_Bool)0;
_Bool var_12 = (_Bool)1;
unsigned short var_14 = (unsigned short)6235;
int var_15 = -731469632;
int zero = 0;
unsigned short var_16 = (unsigned short)35133;
long long int var_17 = 4962881393560695577LL;
unsigned long long int var_18 = 707140982993420823ULL;
unsigned char var_19 = (unsigned char)170;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
