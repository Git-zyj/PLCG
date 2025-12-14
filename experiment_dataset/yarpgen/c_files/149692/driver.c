#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)14384;
short var_4 = (short)26569;
signed char var_7 = (signed char)77;
int var_8 = 1092892878;
unsigned long long int var_10 = 16170212549352685096ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)66;
int var_13 = 1984474365;
unsigned int var_14 = 3860055089U;
unsigned long long int var_15 = 6118180718514123201ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
