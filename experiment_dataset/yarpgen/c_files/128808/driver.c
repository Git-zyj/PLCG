#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)74;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 12027264434229831106ULL;
unsigned long long int var_8 = 7946644343595114862ULL;
unsigned int var_9 = 2205591116U;
int zero = 0;
unsigned int var_10 = 953408042U;
_Bool var_11 = (_Bool)1;
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
