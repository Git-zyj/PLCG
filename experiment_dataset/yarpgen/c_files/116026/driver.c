#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5951634331600471940LL;
_Bool var_7 = (_Bool)1;
long long int var_9 = 7424367001870652993LL;
int zero = 0;
signed char var_11 = (signed char)23;
unsigned char var_12 = (unsigned char)230;
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
