#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14677240573607931469ULL;
signed char var_2 = (signed char)100;
long long int var_3 = -2475187426205726963LL;
unsigned long long int var_5 = 15817318239878762521ULL;
unsigned short var_7 = (unsigned short)37448;
unsigned int var_13 = 3081771311U;
short var_14 = (short)-2192;
int zero = 0;
unsigned char var_17 = (unsigned char)63;
signed char var_18 = (signed char)-101;
short var_19 = (short)32713;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
