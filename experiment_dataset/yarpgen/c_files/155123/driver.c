#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4175073094U;
unsigned int var_3 = 1771992106U;
signed char var_4 = (signed char)-110;
unsigned int var_9 = 1433643287U;
int zero = 0;
unsigned int var_12 = 197876674U;
unsigned long long int var_13 = 566386236697462409ULL;
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
