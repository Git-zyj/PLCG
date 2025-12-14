#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1382633799463771646ULL;
signed char var_7 = (signed char)-118;
unsigned short var_8 = (unsigned short)63933;
int var_9 = -455329787;
unsigned int var_13 = 3436033534U;
signed char var_14 = (signed char)-101;
int zero = 0;
signed char var_16 = (signed char)42;
unsigned long long int var_17 = 6043462702101343110ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
