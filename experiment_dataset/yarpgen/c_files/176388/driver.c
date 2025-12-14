#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6694124553739230342LL;
unsigned short var_11 = (unsigned short)25197;
unsigned char var_14 = (unsigned char)107;
unsigned int var_15 = 767376118U;
int zero = 0;
unsigned long long int var_16 = 15623466081379804034ULL;
int var_17 = -926447730;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
