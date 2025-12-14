#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)43;
_Bool var_9 = (_Bool)1;
unsigned long long int var_11 = 3485302407708884458ULL;
signed char var_12 = (signed char)-43;
unsigned int var_15 = 249504310U;
unsigned int var_17 = 536665130U;
int zero = 0;
unsigned int var_20 = 2810492139U;
unsigned int var_21 = 1029651028U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
