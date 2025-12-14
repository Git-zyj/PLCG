#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 139162501317040588ULL;
unsigned long long int var_3 = 2893624162310530053ULL;
signed char var_4 = (signed char)97;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned long long int var_10 = 3099463389597342108ULL;
unsigned int var_11 = 4015176782U;
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
