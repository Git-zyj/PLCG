#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)87;
unsigned int var_5 = 1743942759U;
unsigned short var_7 = (unsigned short)61958;
unsigned long long int var_11 = 7443657745139087777ULL;
unsigned char var_12 = (unsigned char)17;
unsigned short var_14 = (unsigned short)17527;
signed char var_16 = (signed char)86;
int zero = 0;
int var_17 = -1948474924;
short var_18 = (short)15218;
unsigned long long int var_19 = 16621289361793715737ULL;
int var_20 = -561099842;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
