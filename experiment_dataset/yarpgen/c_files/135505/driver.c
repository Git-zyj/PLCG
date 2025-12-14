#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)65;
_Bool var_3 = (_Bool)1;
long long int var_5 = 6716835704460515051LL;
unsigned short var_7 = (unsigned short)814;
unsigned int var_15 = 1799660891U;
unsigned long long int var_16 = 15623493363880183759ULL;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)17580;
long long int var_22 = -7927886186931572072LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
