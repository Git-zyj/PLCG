#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 61579461;
signed char var_4 = (signed char)-48;
_Bool var_7 = (_Bool)0;
long long int var_8 = 2384289677810528928LL;
unsigned short var_10 = (unsigned short)34360;
long long int var_11 = -4011461258183580655LL;
unsigned int var_12 = 1086464356U;
int zero = 0;
unsigned int var_13 = 131783717U;
unsigned short var_14 = (unsigned short)34684;
unsigned short var_15 = (unsigned short)9078;
unsigned char var_16 = (unsigned char)125;
void init() {
}

void checksum() {
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
