#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17602200285216169094ULL;
unsigned int var_12 = 2269904822U;
unsigned int var_15 = 1197140279U;
int zero = 0;
unsigned short var_20 = (unsigned short)20858;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)251;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
