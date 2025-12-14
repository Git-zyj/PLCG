#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)173;
unsigned long long int var_11 = 10556046255149468318ULL;
unsigned short var_18 = (unsigned short)62958;
unsigned long long int var_19 = 5368966000801159805ULL;
int zero = 0;
signed char var_20 = (signed char)108;
unsigned short var_21 = (unsigned short)47930;
void init() {
}

void checksum() {
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
