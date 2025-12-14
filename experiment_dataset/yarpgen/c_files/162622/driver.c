#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1439765851362147345LL;
unsigned short var_2 = (unsigned short)9942;
signed char var_7 = (signed char)96;
int zero = 0;
_Bool var_10 = (_Bool)1;
long long int var_11 = -5120023370690995692LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
