#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)140;
int var_3 = -1934235444;
long long int var_13 = -8639572556668793454LL;
long long int var_15 = -3045744213285457396LL;
int zero = 0;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-102;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
