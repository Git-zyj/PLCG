#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15619536159264669868ULL;
_Bool var_1 = (_Bool)1;
unsigned int var_4 = 2995885521U;
short var_5 = (short)4263;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)26;
long long int var_15 = -2353903332087036624LL;
int zero = 0;
int var_16 = -1243938022;
long long int var_17 = 5083534902382999983LL;
unsigned int var_18 = 4027442234U;
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
