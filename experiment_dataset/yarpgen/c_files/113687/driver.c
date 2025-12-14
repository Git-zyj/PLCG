#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 701223127U;
int var_3 = -1971526656;
unsigned long long int var_4 = 17295960222827756242ULL;
unsigned int var_5 = 765109155U;
unsigned long long int var_6 = 2184609589815595417ULL;
unsigned int var_9 = 3049560545U;
unsigned char var_10 = (unsigned char)139;
int zero = 0;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)88;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
