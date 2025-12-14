#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -8524303567987742878LL;
_Bool var_8 = (_Bool)0;
long long int var_10 = -7269875379593844279LL;
long long int var_14 = 5165804298916946247LL;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
int zero = 0;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)109;
signed char var_20 = (signed char)0;
signed char var_21 = (signed char)-76;
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
