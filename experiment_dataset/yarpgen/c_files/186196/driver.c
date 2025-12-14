#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)121;
signed char var_7 = (signed char)-99;
unsigned short var_9 = (unsigned short)1244;
unsigned long long int var_10 = 12199740140144845657ULL;
unsigned char var_12 = (unsigned char)130;
signed char var_13 = (signed char)106;
int zero = 0;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-28735;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
