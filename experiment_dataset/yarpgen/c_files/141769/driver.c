#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)14292;
unsigned long long int var_3 = 12671093465571311229ULL;
unsigned long long int var_4 = 11931217000403223526ULL;
unsigned short var_5 = (unsigned short)21869;
unsigned short var_10 = (unsigned short)16827;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-14167;
int zero = 0;
unsigned int var_13 = 1542640299U;
short var_14 = (short)-10227;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
