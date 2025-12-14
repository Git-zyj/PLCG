#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4199668382U;
unsigned char var_2 = (unsigned char)24;
long long int var_4 = 280113336674151323LL;
long long int var_7 = 7693156639756169152LL;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 642270351U;
int zero = 0;
unsigned int var_14 = 1084498795U;
unsigned char var_15 = (unsigned char)149;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
