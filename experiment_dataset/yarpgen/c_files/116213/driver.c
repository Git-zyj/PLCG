#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-60;
_Bool var_7 = (_Bool)0;
unsigned int var_13 = 2085703317U;
int zero = 0;
unsigned long long int var_17 = 8465139130238998401ULL;
_Bool var_18 = (_Bool)0;
long long int var_19 = 8082315776472480936LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
