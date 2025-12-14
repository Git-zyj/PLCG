#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)100;
unsigned long long int var_1 = 11354920521841970399ULL;
unsigned char var_6 = (unsigned char)134;
unsigned int var_8 = 3872080634U;
_Bool var_9 = (_Bool)0;
int zero = 0;
int var_12 = 500678828;
long long int var_13 = 680707114127335148LL;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
