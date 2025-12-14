#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_4 = 3000663807U;
unsigned long long int var_12 = 14508652023751314632ULL;
int var_18 = -1377372914;
int zero = 0;
signed char var_20 = (signed char)-105;
signed char var_21 = (signed char)52;
long long int var_22 = -3748789108017476367LL;
_Bool var_23 = (_Bool)1;
int var_24 = 2000379305;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
