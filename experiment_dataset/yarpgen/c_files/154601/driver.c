#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-70;
_Bool var_5 = (_Bool)1;
unsigned char var_11 = (unsigned char)99;
unsigned long long int var_14 = 3398210618356552396ULL;
int zero = 0;
short var_17 = (short)29216;
long long int var_18 = -610659998117887065LL;
long long int var_19 = 7165365441629532410LL;
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
