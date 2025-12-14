#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8969039273724454613LL;
signed char var_2 = (signed char)-71;
long long int var_4 = 3216946160588387571LL;
unsigned long long int var_5 = 9269776906031707736ULL;
unsigned long long int var_7 = 12596699462568398651ULL;
unsigned int var_9 = 4192805606U;
int zero = 0;
int var_11 = -1402595019;
int var_12 = 1430978423;
void init() {
}

void checksum() {
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
