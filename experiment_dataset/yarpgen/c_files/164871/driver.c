#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)121;
short var_11 = (short)-3212;
signed char var_12 = (signed char)119;
unsigned char var_15 = (unsigned char)61;
int zero = 0;
unsigned long long int var_20 = 15248437958388297999ULL;
int var_21 = 139814806;
unsigned short var_22 = (unsigned short)12868;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
