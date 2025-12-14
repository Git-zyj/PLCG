#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)113;
unsigned long long int var_4 = 2409416832751621877ULL;
int var_7 = -2119233974;
unsigned int var_10 = 3025523946U;
short var_15 = (short)-30397;
signed char var_16 = (signed char)65;
unsigned char var_19 = (unsigned char)4;
int zero = 0;
unsigned short var_20 = (unsigned short)27707;
int var_21 = -955269414;
unsigned int var_22 = 1973388131U;
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
