#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1321777317;
unsigned int var_1 = 1543821502U;
unsigned long long int var_3 = 7265766912454671558ULL;
int var_8 = -790231744;
int zero = 0;
unsigned char var_10 = (unsigned char)182;
_Bool var_11 = (_Bool)0;
long long int var_12 = -2641670132849018519LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
