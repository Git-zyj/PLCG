#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)67;
_Bool var_1 = (_Bool)1;
unsigned int var_3 = 312143911U;
unsigned int var_4 = 936099510U;
unsigned int var_5 = 1973410935U;
unsigned int var_6 = 3037238627U;
unsigned int var_8 = 2168607631U;
unsigned int var_9 = 2762189644U;
signed char var_10 = (signed char)77;
int zero = 0;
unsigned int var_11 = 2583853729U;
long long int var_12 = 1201852626255959147LL;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 3902318300U;
long long int var_15 = 1268532967018630303LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
