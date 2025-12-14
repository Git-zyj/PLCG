#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 428966698;
long long int var_2 = 8544827783647994864LL;
long long int var_6 = -6805724979776620660LL;
int var_7 = 827135441;
unsigned char var_8 = (unsigned char)146;
int var_10 = -1962060687;
int zero = 0;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)1;
long long int var_13 = 8382050566761845512LL;
unsigned char var_14 = (unsigned char)157;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
