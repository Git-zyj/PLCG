#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)31675;
short var_6 = (short)-2058;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)-18;
long long int var_13 = 3371615659189441200LL;
int zero = 0;
unsigned char var_15 = (unsigned char)15;
unsigned short var_16 = (unsigned short)45634;
int var_17 = -501049878;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
