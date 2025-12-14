#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 15300807912582922711ULL;
signed char var_6 = (signed char)-104;
unsigned long long int var_7 = 11427736612823191972ULL;
long long int var_8 = 8119081506972106918LL;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)0;
int zero = 0;
_Bool var_13 = (_Bool)0;
short var_14 = (short)4367;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
