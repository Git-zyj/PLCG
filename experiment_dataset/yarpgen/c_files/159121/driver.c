#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)60457;
unsigned short var_6 = (unsigned short)45979;
unsigned short var_10 = (unsigned short)33480;
unsigned int var_11 = 2841799998U;
unsigned short var_15 = (unsigned short)8555;
unsigned long long int var_18 = 13374825705850160748ULL;
int zero = 0;
unsigned int var_19 = 365223290U;
unsigned int var_20 = 733709026U;
void init() {
}

void checksum() {
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
