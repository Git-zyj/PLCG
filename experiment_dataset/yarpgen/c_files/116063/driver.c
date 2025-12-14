#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)7;
signed char var_2 = (signed char)55;
unsigned int var_3 = 555720133U;
long long int var_6 = 1652034924677329224LL;
unsigned char var_8 = (unsigned char)110;
signed char var_15 = (signed char)-75;
int zero = 0;
signed char var_18 = (signed char)66;
signed char var_19 = (signed char)109;
unsigned short var_20 = (unsigned short)3740;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
