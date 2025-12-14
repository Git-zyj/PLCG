#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-2887;
short var_3 = (short)21447;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
long long int var_7 = 5068867734346331453LL;
int zero = 0;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)59;
unsigned long long int var_16 = 12452621653585631823ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
