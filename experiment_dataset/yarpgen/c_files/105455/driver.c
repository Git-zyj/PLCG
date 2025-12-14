#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)41;
int var_5 = 1790089998;
long long int var_12 = 1104594447673537855LL;
_Bool var_14 = (_Bool)1;
signed char var_18 = (signed char)-79;
int zero = 0;
signed char var_20 = (signed char)124;
unsigned short var_21 = (unsigned short)26088;
unsigned int var_22 = 712227967U;
long long int var_23 = -378381395618090264LL;
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
