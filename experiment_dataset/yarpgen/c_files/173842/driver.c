#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-60;
unsigned char var_1 = (unsigned char)29;
unsigned char var_2 = (unsigned char)15;
unsigned long long int var_3 = 3227435012586347357ULL;
signed char var_8 = (signed char)15;
int zero = 0;
short var_16 = (short)-18834;
signed char var_17 = (signed char)-28;
unsigned long long int var_18 = 1649378821576897289ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
