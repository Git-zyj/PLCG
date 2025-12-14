#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)24016;
signed char var_3 = (signed char)-16;
unsigned int var_4 = 1048161299U;
unsigned long long int var_5 = 5547399764566889548ULL;
unsigned int var_6 = 176340593U;
signed char var_7 = (signed char)70;
signed char var_8 = (signed char)56;
unsigned int var_9 = 2921874941U;
unsigned int var_10 = 1810339016U;
long long int var_11 = -8556635043448428031LL;
long long int var_13 = 108693373188916115LL;
unsigned int var_14 = 4164271802U;
int zero = 0;
int var_15 = 2076810256;
unsigned long long int var_16 = 12812666606516823258ULL;
int var_17 = 1649046308;
long long int var_18 = -5910922650683065934LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
