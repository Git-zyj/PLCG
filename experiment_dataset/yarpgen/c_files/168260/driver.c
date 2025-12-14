#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)35;
signed char var_5 = (signed char)74;
unsigned short var_7 = (unsigned short)5168;
unsigned long long int var_8 = 7664070992820746586ULL;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)14;
int var_12 = 229893070;
int zero = 0;
short var_13 = (short)-32337;
int var_14 = -1736459081;
unsigned int var_15 = 46163041U;
signed char var_16 = (signed char)-24;
unsigned int var_17 = 3009982751U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
