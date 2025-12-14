#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1908694334;
long long int var_3 = 5713623718277874158LL;
unsigned int var_4 = 2710543434U;
unsigned long long int var_5 = 6096155906714691221ULL;
long long int var_6 = -816277070803290517LL;
signed char var_7 = (signed char)50;
unsigned int var_8 = 995219088U;
unsigned long long int var_9 = 17862849140383861019ULL;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 3503118220U;
int zero = 0;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-14779;
signed char var_15 = (signed char)-110;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
