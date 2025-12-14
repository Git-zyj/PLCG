#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-96;
signed char var_1 = (signed char)-57;
_Bool var_2 = (_Bool)0;
short var_3 = (short)18313;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)-43;
signed char var_8 = (signed char)-62;
signed char var_9 = (signed char)-29;
signed char var_10 = (signed char)64;
signed char var_11 = (signed char)30;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-93;
int zero = 0;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
