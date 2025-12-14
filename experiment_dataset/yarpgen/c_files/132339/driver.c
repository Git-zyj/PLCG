#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -460675981;
unsigned int var_4 = 2685408740U;
unsigned short var_6 = (unsigned short)30006;
int zero = 0;
unsigned char var_10 = (unsigned char)234;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 3766858007U;
signed char var_13 = (signed char)-127;
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
