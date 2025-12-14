#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9072758832425838277ULL;
_Bool var_2 = (_Bool)0;
short var_10 = (short)-19445;
unsigned short var_12 = (unsigned short)968;
long long int var_13 = -1737666352871063942LL;
_Bool var_15 = (_Bool)1;
int var_16 = 376808554;
int zero = 0;
unsigned short var_17 = (unsigned short)2182;
unsigned short var_18 = (unsigned short)11446;
unsigned char var_19 = (unsigned char)194;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)40257;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
