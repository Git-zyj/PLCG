#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 694737731;
signed char var_5 = (signed char)-21;
unsigned int var_6 = 3816497497U;
signed char var_7 = (signed char)-71;
signed char var_10 = (signed char)-62;
signed char var_11 = (signed char)0;
int zero = 0;
unsigned int var_18 = 1653239924U;
unsigned char var_19 = (unsigned char)224;
short var_20 = (short)5776;
short var_21 = (short)-24514;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
