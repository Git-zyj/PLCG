#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4908840634298708363LL;
unsigned long long int var_4 = 14663227552758626165ULL;
short var_7 = (short)3196;
unsigned short var_13 = (unsigned short)17800;
unsigned int var_15 = 3308081785U;
long long int var_18 = -5743750009391803105LL;
int zero = 0;
unsigned long long int var_20 = 7304429827233415329ULL;
unsigned int var_21 = 869243388U;
void init() {
}

void checksum() {
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
