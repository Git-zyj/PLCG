#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)6212;
signed char var_5 = (signed char)-93;
unsigned long long int var_10 = 1855966635395092981ULL;
short var_13 = (short)-31218;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned int var_17 = 4251658965U;
unsigned char var_18 = (unsigned char)72;
unsigned long long int var_19 = 18377614927857280882ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
