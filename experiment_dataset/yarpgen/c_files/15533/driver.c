#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -677884237;
_Bool var_7 = (_Bool)0;
unsigned long long int var_11 = 12007082249182541300ULL;
unsigned int var_15 = 1932586036U;
int zero = 0;
unsigned long long int var_19 = 723507160073329193ULL;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
