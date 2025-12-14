#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3188317321U;
unsigned short var_3 = (unsigned short)9954;
signed char var_4 = (signed char)22;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 12408315380490359977ULL;
short var_9 = (short)-32613;
int zero = 0;
signed char var_15 = (signed char)37;
long long int var_16 = 9148947384451187235LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
