#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1186869932U;
unsigned char var_2 = (unsigned char)201;
short var_3 = (short)26700;
unsigned long long int var_7 = 3921760921770378760ULL;
int zero = 0;
unsigned int var_13 = 2181357276U;
signed char var_14 = (signed char)-75;
signed char var_15 = (signed char)81;
long long int var_16 = 7156589331688890540LL;
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
