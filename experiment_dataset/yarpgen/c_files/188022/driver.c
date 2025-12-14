#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-88;
_Bool var_1 = (_Bool)1;
unsigned short var_4 = (unsigned short)8770;
short var_6 = (short)-14288;
signed char var_7 = (signed char)-4;
short var_19 = (short)-11439;
int zero = 0;
short var_20 = (short)14305;
int var_21 = -1245162118;
unsigned long long int var_22 = 2922201210988957047ULL;
long long int var_23 = -7391605380035097101LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
