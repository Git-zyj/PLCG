#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12489078658588494698ULL;
_Bool var_8 = (_Bool)1;
int zero = 0;
signed char var_19 = (signed char)-58;
signed char var_20 = (signed char)-99;
_Bool var_21 = (_Bool)0;
long long int var_22 = 4084228282527432172LL;
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
