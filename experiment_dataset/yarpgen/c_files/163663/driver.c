#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4020012614U;
signed char var_2 = (signed char)-81;
short var_8 = (short)-2871;
long long int var_11 = -8062970919549452069LL;
unsigned int var_12 = 1073188399U;
int zero = 0;
unsigned int var_14 = 1537108241U;
long long int var_15 = 7361707294076658181LL;
unsigned char var_16 = (unsigned char)179;
long long int var_17 = 4892354455662338454LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
