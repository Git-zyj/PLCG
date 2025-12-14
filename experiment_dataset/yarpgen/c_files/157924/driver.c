#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)94;
int var_5 = -1250598551;
_Bool var_8 = (_Bool)0;
int zero = 0;
signed char var_11 = (signed char)-114;
short var_12 = (short)-9711;
int var_13 = -2093660145;
long long int var_14 = -6826566879095661795LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
