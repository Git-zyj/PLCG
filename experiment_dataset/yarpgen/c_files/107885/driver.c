#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-28323;
short var_2 = (short)-546;
int var_3 = 1717819669;
unsigned int var_4 = 4022278072U;
short var_7 = (short)5889;
unsigned int var_8 = 653941822U;
int zero = 0;
unsigned long long int var_10 = 4618504664559493165ULL;
unsigned short var_11 = (unsigned short)11539;
_Bool var_12 = (_Bool)1;
int var_13 = 1023828905;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
