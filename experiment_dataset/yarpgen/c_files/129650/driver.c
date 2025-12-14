#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)89;
int var_2 = -1102973916;
unsigned short var_3 = (unsigned short)48736;
unsigned long long int var_5 = 3907822553292244612ULL;
short var_6 = (short)-28037;
unsigned short var_9 = (unsigned short)24357;
int zero = 0;
unsigned short var_10 = (unsigned short)9615;
unsigned char var_11 = (unsigned char)46;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
