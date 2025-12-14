#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)108;
unsigned int var_6 = 706837879U;
signed char var_9 = (signed char)-124;
signed char var_11 = (signed char)-32;
int var_12 = -476426425;
unsigned int var_13 = 2094092967U;
unsigned long long int var_14 = 8269061607235535401ULL;
long long int var_15 = -5056458771339001916LL;
int zero = 0;
unsigned int var_18 = 3561518021U;
signed char var_19 = (signed char)-33;
short var_20 = (short)19127;
_Bool var_21 = (_Bool)0;
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
