#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)13128;
long long int var_3 = -1745542583853251050LL;
long long int var_8 = 418142583926147622LL;
int var_10 = 130972256;
int var_12 = 1386839146;
signed char var_13 = (signed char)79;
unsigned short var_18 = (unsigned short)51892;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)34096;
unsigned long long int var_21 = 5749919762491830985ULL;
void init() {
}

void checksum() {
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
