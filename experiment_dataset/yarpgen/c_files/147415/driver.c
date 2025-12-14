#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13017701600348028506ULL;
unsigned long long int var_2 = 8486969659711661345ULL;
_Bool var_8 = (_Bool)1;
signed char var_10 = (signed char)-66;
int zero = 0;
signed char var_11 = (signed char)-127;
int var_12 = -1492342931;
_Bool var_13 = (_Bool)1;
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
