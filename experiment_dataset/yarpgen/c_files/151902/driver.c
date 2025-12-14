#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-39;
unsigned long long int var_1 = 6502056013974308744ULL;
unsigned long long int var_2 = 5309137720323408568ULL;
unsigned long long int var_3 = 4588838381901153184ULL;
unsigned short var_4 = (unsigned short)57069;
signed char var_11 = (signed char)-127;
int zero = 0;
unsigned int var_13 = 2741490135U;
unsigned int var_14 = 4084628889U;
signed char var_15 = (signed char)-40;
void init() {
}

void checksum() {
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
