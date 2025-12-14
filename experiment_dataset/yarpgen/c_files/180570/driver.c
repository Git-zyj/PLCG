#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1424514372U;
signed char var_10 = (signed char)98;
int zero = 0;
unsigned long long int var_11 = 9409115128947480150ULL;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 16310041813278386328ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
