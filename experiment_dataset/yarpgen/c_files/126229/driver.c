#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)106;
_Bool var_3 = (_Bool)0;
unsigned int var_5 = 774094930U;
long long int var_6 = -5208185082635968757LL;
unsigned int var_8 = 3430185699U;
long long int var_9 = -6173413544032633708LL;
int var_10 = -1465651064;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)-110;
int zero = 0;
unsigned short var_13 = (unsigned short)46684;
int var_14 = -967978977;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 9510547092753963540ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
