#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)42218;
_Bool var_5 = (_Bool)1;
unsigned int var_8 = 3269959234U;
unsigned int var_9 = 970533969U;
int zero = 0;
unsigned long long int var_10 = 10384801818967616472ULL;
unsigned int var_11 = 2540187843U;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
