#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)17;
_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)-45;
unsigned long long int var_3 = 10324814987062625707ULL;
int var_4 = 635922213;
int var_5 = 747130969;
_Bool var_7 = (_Bool)0;
int zero = 0;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)1;
int var_12 = 371404187;
unsigned long long int var_13 = 18387827321716393926ULL;
signed char var_14 = (signed char)62;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
