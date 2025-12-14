#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)1469;
unsigned short var_2 = (unsigned short)11636;
unsigned short var_3 = (unsigned short)7584;
unsigned int var_5 = 3666964907U;
unsigned int var_6 = 2772664864U;
signed char var_9 = (signed char)34;
unsigned short var_10 = (unsigned short)9238;
unsigned short var_11 = (unsigned short)3069;
int zero = 0;
signed char var_13 = (signed char)110;
int var_14 = -2067019249;
unsigned short var_15 = (unsigned short)27949;
long long int var_16 = 6618434951061377659LL;
unsigned char var_17 = (unsigned char)57;
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
