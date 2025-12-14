#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)26151;
long long int var_5 = -7005636034800875841LL;
long long int var_7 = -5249887965973859488LL;
long long int var_10 = 2465635111992063441LL;
long long int var_11 = 7717364843160434549LL;
int zero = 0;
long long int var_16 = 3182099399438426471LL;
long long int var_17 = 8744194387854684220LL;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)113;
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
