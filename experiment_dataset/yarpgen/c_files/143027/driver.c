#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)86;
unsigned int var_4 = 3546234353U;
unsigned int var_5 = 1880063067U;
unsigned long long int var_8 = 7285942852680261310ULL;
int zero = 0;
unsigned int var_10 = 1971286476U;
unsigned long long int var_11 = 6871926993201567721ULL;
signed char var_12 = (signed char)36;
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
