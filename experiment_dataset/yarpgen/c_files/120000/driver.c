#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 921349900U;
signed char var_9 = (signed char)60;
long long int var_12 = 7070648959245424222LL;
int zero = 0;
_Bool var_15 = (_Bool)0;
short var_16 = (short)-22309;
signed char var_17 = (signed char)54;
unsigned long long int var_18 = 3571889330703754000ULL;
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
