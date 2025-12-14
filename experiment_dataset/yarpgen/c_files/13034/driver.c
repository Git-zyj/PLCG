#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -837854923;
int var_11 = -847875479;
_Bool var_12 = (_Bool)0;
long long int var_16 = -7913116442588491622LL;
int zero = 0;
unsigned long long int var_18 = 2394041414373396674ULL;
signed char var_19 = (signed char)18;
short var_20 = (short)22197;
long long int var_21 = 3590850200590232106LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
