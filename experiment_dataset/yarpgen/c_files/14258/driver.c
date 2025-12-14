#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5042156894204755425LL;
signed char var_1 = (signed char)114;
int var_4 = 1925731157;
signed char var_6 = (signed char)11;
long long int var_10 = 8783142546582401430LL;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)136;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
