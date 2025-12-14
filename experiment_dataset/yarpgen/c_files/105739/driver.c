#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_2 = 17798120463738846147ULL;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)-7;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)47;
unsigned long long int var_11 = 12469073690019722957ULL;
int zero = 0;
short var_13 = (short)9857;
_Bool var_14 = (_Bool)0;
short var_15 = (short)32236;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
