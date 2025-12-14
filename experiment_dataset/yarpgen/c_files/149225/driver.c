#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)62;
_Bool var_3 = (_Bool)0;
int var_4 = 1781949112;
short var_7 = (short)-6988;
int var_8 = 1439809652;
signed char var_9 = (signed char)-58;
int zero = 0;
short var_11 = (short)-9462;
long long int var_12 = -7706765830271230038LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
