#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1167684561U;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)-121;
int zero = 0;
unsigned long long int var_10 = 1014197859894797542ULL;
long long int var_11 = -1209896279817764208LL;
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
