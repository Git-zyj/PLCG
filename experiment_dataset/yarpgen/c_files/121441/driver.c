#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -215381713782254077LL;
short var_8 = (short)27597;
unsigned long long int var_10 = 5247144078335173976ULL;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned short var_17 = (unsigned short)57314;
unsigned char var_18 = (unsigned char)23;
unsigned long long int var_19 = 8017474580230653916ULL;
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
