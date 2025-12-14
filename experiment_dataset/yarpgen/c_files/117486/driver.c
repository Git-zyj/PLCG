#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-1;
_Bool var_6 = (_Bool)1;
_Bool var_9 = (_Bool)1;
short var_10 = (short)18613;
long long int var_11 = -125448848529169938LL;
short var_14 = (short)7136;
int zero = 0;
unsigned char var_17 = (unsigned char)93;
unsigned int var_18 = 2693727053U;
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
