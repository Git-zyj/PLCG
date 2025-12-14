#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)22392;
unsigned short var_8 = (unsigned short)46250;
int var_12 = -5252618;
unsigned long long int var_13 = 17763661131525001578ULL;
unsigned int var_15 = 3870747884U;
int zero = 0;
signed char var_20 = (signed char)-51;
unsigned long long int var_21 = 10370012104169349424ULL;
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
