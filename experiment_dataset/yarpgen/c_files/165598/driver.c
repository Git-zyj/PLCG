#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)240;
unsigned int var_1 = 3494069464U;
int var_3 = 672149455;
signed char var_4 = (signed char)57;
signed char var_6 = (signed char)89;
short var_8 = (short)5046;
unsigned int var_9 = 2489701659U;
unsigned char var_10 = (unsigned char)235;
int zero = 0;
unsigned long long int var_12 = 7863870632319469113ULL;
unsigned int var_13 = 3803307920U;
unsigned int var_14 = 2659836184U;
unsigned short var_15 = (unsigned short)57616;
unsigned int var_16 = 595725850U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
