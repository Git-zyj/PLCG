#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3840670284638247495ULL;
unsigned short var_2 = (unsigned short)22335;
signed char var_7 = (signed char)87;
signed char var_8 = (signed char)-124;
long long int var_9 = -6717805746446741432LL;
short var_10 = (short)7336;
short var_13 = (short)-30584;
short var_15 = (short)-9684;
signed char var_16 = (signed char)-45;
unsigned char var_17 = (unsigned char)120;
int zero = 0;
unsigned int var_19 = 2785472715U;
int var_20 = 1572080392;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
