#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 326037677U;
int var_7 = -2061961501;
int zero = 0;
unsigned long long int var_10 = 17816551857382948722ULL;
unsigned int var_11 = 4278463981U;
unsigned long long int var_12 = 9689878414789502608ULL;
unsigned long long int var_13 = 13015774183840894978ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
