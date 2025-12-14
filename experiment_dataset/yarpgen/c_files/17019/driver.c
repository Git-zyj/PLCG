#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2493747949U;
signed char var_1 = (signed char)-74;
long long int var_4 = -5439596024047397654LL;
long long int var_5 = -889703906584196481LL;
int var_6 = 1938336780;
long long int var_7 = -5330415346350827946LL;
long long int var_8 = 3535210319628837854LL;
unsigned int var_10 = 1467806180U;
signed char var_11 = (signed char)124;
int zero = 0;
long long int var_13 = -8066138723196341253LL;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 182264591U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
