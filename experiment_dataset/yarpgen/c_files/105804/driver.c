#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-91;
int var_7 = 1768552621;
signed char var_13 = (signed char)-2;
long long int var_18 = 7956393198525214680LL;
int zero = 0;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-19090;
long long int var_22 = -2873767986066129394LL;
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
