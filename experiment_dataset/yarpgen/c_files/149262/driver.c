#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6083;
unsigned char var_1 = (unsigned char)1;
signed char var_4 = (signed char)-106;
short var_5 = (short)-25151;
unsigned int var_6 = 1670244078U;
_Bool var_8 = (_Bool)0;
long long int var_9 = -364485772552712616LL;
unsigned int var_10 = 4117996373U;
int zero = 0;
long long int var_14 = -1099683899364704674LL;
unsigned int var_15 = 3222991082U;
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
