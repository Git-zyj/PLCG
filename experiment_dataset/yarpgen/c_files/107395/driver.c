#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)40733;
unsigned long long int var_3 = 11037715641033409845ULL;
unsigned char var_6 = (unsigned char)14;
unsigned char var_7 = (unsigned char)51;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)0;
int zero = 0;
long long int var_10 = 7678209040831496882LL;
short var_11 = (short)20254;
int var_12 = -918584236;
_Bool var_13 = (_Bool)1;
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
