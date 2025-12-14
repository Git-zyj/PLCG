#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5969567426605699754LL;
_Bool var_2 = (_Bool)1;
int var_6 = 1302876407;
unsigned int var_7 = 557984872U;
int var_10 = 1643628276;
_Bool var_13 = (_Bool)1;
int var_14 = -2145128225;
int zero = 0;
unsigned short var_15 = (unsigned short)23858;
signed char var_16 = (signed char)40;
unsigned long long int var_17 = 6114379506548035831ULL;
long long int var_18 = 2174847222825470869LL;
long long int var_19 = 6388259709105188078LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
