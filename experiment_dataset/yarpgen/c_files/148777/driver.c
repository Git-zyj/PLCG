#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
long long int var_6 = 3798978521025966571LL;
long long int var_8 = 1693139028386236704LL;
_Bool var_9 = (_Bool)0;
int zero = 0;
signed char var_10 = (signed char)-113;
unsigned int var_11 = 1923107471U;
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
