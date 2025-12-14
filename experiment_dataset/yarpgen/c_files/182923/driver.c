#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14829881080971352249ULL;
int var_5 = -258085654;
int var_7 = 1381993017;
int var_8 = 1922066476;
unsigned char var_13 = (unsigned char)227;
signed char var_15 = (signed char)26;
signed char var_16 = (signed char)103;
int zero = 0;
signed char var_18 = (signed char)21;
int var_19 = -1156278231;
_Bool var_20 = (_Bool)0;
int var_21 = -2132870934;
signed char var_22 = (signed char)100;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
