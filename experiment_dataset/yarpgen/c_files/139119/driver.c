#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2436827056U;
signed char var_2 = (signed char)-85;
unsigned long long int var_3 = 13298547177075303180ULL;
int zero = 0;
long long int var_10 = -622225010314636332LL;
unsigned long long int var_11 = 3059507969190743877ULL;
unsigned long long int var_12 = 8280588665764445875ULL;
_Bool var_13 = (_Bool)1;
short var_14 = (short)-18482;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
