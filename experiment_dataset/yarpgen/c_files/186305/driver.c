#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -3595526853010422334LL;
unsigned int var_9 = 2275578466U;
int zero = 0;
int var_13 = -1300685131;
unsigned long long int var_14 = 13769304268061572877ULL;
signed char var_15 = (signed char)-66;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)15145;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
