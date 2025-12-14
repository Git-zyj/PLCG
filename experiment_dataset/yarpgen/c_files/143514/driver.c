#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_2 = -728463549;
unsigned char var_3 = (unsigned char)54;
int var_4 = 1705907296;
int var_7 = 1403136324;
long long int var_11 = 4672817018075489795LL;
unsigned char var_13 = (unsigned char)49;
unsigned int var_14 = 3385673492U;
unsigned long long int var_16 = 16101386155417156530ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)164;
short var_19 = (short)-15164;
void init() {
}

void checksum() {
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
