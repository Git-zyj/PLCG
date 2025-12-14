#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1570890838U;
unsigned char var_4 = (unsigned char)109;
unsigned int var_5 = 1742227993U;
unsigned short var_6 = (unsigned short)12923;
short var_9 = (short)-10520;
unsigned long long int var_14 = 17811767906990208517ULL;
unsigned int var_16 = 2766892785U;
int zero = 0;
_Bool var_17 = (_Bool)1;
int var_18 = -268308026;
unsigned int var_19 = 3032488545U;
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
