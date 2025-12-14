#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
_Bool var_9 = (_Bool)0;
long long int var_12 = 2410812288747889402LL;
int var_14 = 1721547088;
_Bool var_15 = (_Bool)0;
int var_16 = -130115275;
int zero = 0;
long long int var_17 = 5612767162508774429LL;
signed char var_18 = (signed char)-51;
short var_19 = (short)-11974;
long long int var_20 = 1079501166527467185LL;
int var_21 = -271084616;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
