#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2841322107U;
_Bool var_6 = (_Bool)0;
unsigned int var_10 = 2015411965U;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)-69;
signed char var_15 = (signed char)-105;
int zero = 0;
int var_16 = 1480757701;
long long int var_17 = -6215779605214109847LL;
unsigned long long int var_18 = 15771377125646277429ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
