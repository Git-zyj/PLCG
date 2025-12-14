#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_5 = (short)15706;
unsigned int var_14 = 58386398U;
signed char var_16 = (signed char)111;
int zero = 0;
short var_20 = (short)-22334;
_Bool var_21 = (_Bool)0;
long long int var_22 = -1696416391525996074LL;
unsigned long long int var_23 = 2934844315086401037ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
