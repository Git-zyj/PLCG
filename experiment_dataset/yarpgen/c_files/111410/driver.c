#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8077013906611227470ULL;
unsigned long long int var_5 = 13386717635450134857ULL;
unsigned int var_10 = 3843852508U;
int zero = 0;
unsigned long long int var_12 = 7810941892503088475ULL;
unsigned int var_13 = 996487579U;
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
