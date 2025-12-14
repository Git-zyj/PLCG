#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11997292912589810918ULL;
short var_5 = (short)-28612;
_Bool var_7 = (_Bool)0;
int zero = 0;
unsigned long long int var_12 = 1824843184556103429ULL;
unsigned char var_13 = (unsigned char)172;
unsigned char var_14 = (unsigned char)212;
signed char var_15 = (signed char)75;
unsigned long long int var_16 = 1109318853941271005ULL;
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
