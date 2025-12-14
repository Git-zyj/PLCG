#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)17947;
_Bool var_4 = (_Bool)0;
_Bool var_8 = (_Bool)0;
long long int var_13 = -376072043159162759LL;
int zero = 0;
unsigned long long int var_15 = 1106257481803094959ULL;
long long int var_16 = 754377818658188630LL;
signed char var_17 = (signed char)-77;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
