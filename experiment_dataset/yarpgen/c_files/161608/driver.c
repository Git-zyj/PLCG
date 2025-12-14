#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)154;
int var_3 = -1314151765;
_Bool var_4 = (_Bool)1;
_Bool var_6 = (_Bool)1;
signed char var_11 = (signed char)-123;
int zero = 0;
signed char var_12 = (signed char)-103;
short var_13 = (short)9168;
signed char var_14 = (signed char)-55;
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
