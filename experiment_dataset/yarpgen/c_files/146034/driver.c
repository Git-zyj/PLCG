#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)-14;
unsigned long long int var_8 = 4033830018319342970ULL;
signed char var_11 = (signed char)118;
int zero = 0;
unsigned short var_17 = (unsigned short)52228;
unsigned char var_18 = (unsigned char)119;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
