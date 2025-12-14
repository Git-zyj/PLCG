#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 788251248;
short var_1 = (short)27550;
signed char var_2 = (signed char)-74;
short var_3 = (short)-21522;
signed char var_7 = (signed char)-102;
int zero = 0;
unsigned char var_12 = (unsigned char)131;
unsigned int var_13 = 1678653930U;
int var_14 = -1014468761;
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
