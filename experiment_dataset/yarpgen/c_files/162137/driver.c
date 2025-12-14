#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3374759279U;
unsigned short var_11 = (unsigned short)52410;
unsigned int var_12 = 3025875030U;
signed char var_14 = (signed char)-45;
unsigned long long int var_17 = 2953209628788614346ULL;
int zero = 0;
signed char var_20 = (signed char)-5;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
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
