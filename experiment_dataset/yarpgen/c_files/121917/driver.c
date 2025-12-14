#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 1982411453U;
unsigned int var_6 = 650604913U;
short var_7 = (short)17604;
unsigned int var_9 = 1261824550U;
int var_11 = 1491759265;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned int var_17 = 2179672570U;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)98;
_Bool var_20 = (_Bool)0;
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
