#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 740723887U;
int var_4 = 1339912006;
_Bool var_5 = (_Bool)0;
int var_7 = -1848134616;
_Bool var_11 = (_Bool)1;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 2984679722U;
unsigned short var_14 = (unsigned short)63076;
void init() {
}

void checksum() {
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
