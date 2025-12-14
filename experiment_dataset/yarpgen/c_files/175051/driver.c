#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17612062923570802016ULL;
signed char var_1 = (signed char)108;
signed char var_7 = (signed char)-61;
unsigned char var_9 = (unsigned char)52;
unsigned short var_10 = (unsigned short)40033;
_Bool var_13 = (_Bool)1;
int zero = 0;
signed char var_15 = (signed char)-96;
signed char var_16 = (signed char)1;
void init() {
}

void checksum() {
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
