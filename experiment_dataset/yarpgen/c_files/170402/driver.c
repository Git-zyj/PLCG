#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-105;
_Bool var_8 = (_Bool)1;
signed char var_10 = (signed char)4;
long long int var_11 = 4306443690154046057LL;
int zero = 0;
signed char var_19 = (signed char)-41;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-10;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
