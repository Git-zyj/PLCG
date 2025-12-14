#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 9803247840053539864ULL;
signed char var_9 = (signed char)34;
_Bool var_10 = (_Bool)0;
int zero = 0;
long long int var_12 = -288803411823531711LL;
unsigned char var_13 = (unsigned char)138;
void init() {
}

void checksum() {
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
