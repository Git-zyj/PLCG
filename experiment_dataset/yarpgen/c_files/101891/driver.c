#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 157779430U;
signed char var_3 = (signed char)104;
unsigned int var_5 = 2862811138U;
long long int var_7 = -1522791939401408244LL;
short var_8 = (short)26391;
short var_9 = (short)-31532;
int zero = 0;
unsigned long long int var_10 = 13363854048684628127ULL;
unsigned char var_11 = (unsigned char)206;
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
