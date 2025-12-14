#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)144;
_Bool var_7 = (_Bool)1;
signed char var_11 = (signed char)-109;
int var_19 = -1932129557;
int zero = 0;
unsigned char var_20 = (unsigned char)47;
int var_21 = -1287914488;
long long int var_22 = -1880332351232762658LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
