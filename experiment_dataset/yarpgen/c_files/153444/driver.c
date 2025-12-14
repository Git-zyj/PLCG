#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 2616949526U;
int var_9 = -210960522;
_Bool var_10 = (_Bool)0;
short var_14 = (short)-8142;
short var_16 = (short)-2939;
int zero = 0;
short var_18 = (short)-1233;
unsigned int var_19 = 235532700U;
unsigned long long int var_20 = 17329968122587282517ULL;
unsigned int var_21 = 3832673346U;
int var_22 = -1867854613;
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
