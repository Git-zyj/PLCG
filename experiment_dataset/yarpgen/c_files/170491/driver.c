#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 17564103561842019275ULL;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)137;
int zero = 0;
unsigned long long int var_17 = 17785205621621503593ULL;
short var_18 = (short)8660;
unsigned long long int var_19 = 10053077676031894079ULL;
unsigned short var_20 = (unsigned short)12118;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
