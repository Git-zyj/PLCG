#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)18475;
signed char var_6 = (signed char)-93;
signed char var_8 = (signed char)-91;
unsigned long long int var_10 = 5793600136322779846ULL;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned char var_15 = (unsigned char)109;
signed char var_16 = (signed char)47;
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
