#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6989429621289789971LL;
unsigned short var_1 = (unsigned short)6501;
unsigned short var_2 = (unsigned short)43225;
unsigned short var_3 = (unsigned short)8787;
unsigned int var_12 = 2903744224U;
int zero = 0;
unsigned char var_16 = (unsigned char)14;
unsigned long long int var_17 = 18300136377372113053ULL;
_Bool var_18 = (_Bool)1;
int var_19 = -1267991786;
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
