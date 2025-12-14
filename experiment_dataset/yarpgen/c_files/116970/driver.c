#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3748222813U;
unsigned long long int var_6 = 14547152480560143252ULL;
unsigned int var_7 = 868133690U;
int zero = 0;
unsigned long long int var_11 = 10571124276954804639ULL;
unsigned int var_12 = 3936288035U;
short var_13 = (short)-1414;
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
