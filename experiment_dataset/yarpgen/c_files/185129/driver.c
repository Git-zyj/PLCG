#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_2 = (short)-25584;
unsigned long long int var_4 = 8635393022452561306ULL;
signed char var_5 = (signed char)-110;
unsigned short var_7 = (unsigned short)64905;
unsigned char var_10 = (unsigned char)242;
int zero = 0;
unsigned long long int var_12 = 12527084698985224017ULL;
unsigned int var_13 = 639741459U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
