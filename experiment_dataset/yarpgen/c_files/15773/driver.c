#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)4968;
_Bool var_6 = (_Bool)1;
int var_14 = 1387728194;
int zero = 0;
_Bool var_15 = (_Bool)0;
short var_16 = (short)-25339;
unsigned int var_17 = 1327876383U;
unsigned int var_18 = 2659911448U;
void init() {
}

void checksum() {
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
