#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2061895099421218596LL;
unsigned long long int var_2 = 4826175573260238176ULL;
signed char var_3 = (signed char)88;
unsigned int var_4 = 2125486996U;
signed char var_5 = (signed char)51;
long long int var_6 = 7037947541241567006LL;
unsigned char var_7 = (unsigned char)47;
short var_8 = (short)372;
long long int var_13 = 1693333249748911681LL;
int zero = 0;
long long int var_14 = -8909820467781753953LL;
unsigned long long int var_15 = 7048310794294169046ULL;
signed char var_16 = (signed char)47;
signed char var_17 = (signed char)-99;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
