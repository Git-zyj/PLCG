#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_11 = 891363889U;
_Bool var_13 = (_Bool)1;
unsigned char var_15 = (unsigned char)31;
int zero = 0;
long long int var_20 = 7023596536944370948LL;
unsigned long long int var_21 = 12664975254792032294ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
