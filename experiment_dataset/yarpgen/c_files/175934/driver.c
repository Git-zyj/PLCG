#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1544837938;
signed char var_9 = (signed char)-39;
unsigned long long int var_10 = 10490690604074804010ULL;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 15855147117853795327ULL;
unsigned int var_15 = 3756734265U;
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
