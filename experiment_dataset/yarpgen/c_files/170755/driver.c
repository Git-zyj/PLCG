#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)160;
unsigned int var_5 = 1819075374U;
unsigned int var_6 = 2781447357U;
signed char var_15 = (signed char)23;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-88;
int zero = 0;
unsigned long long int var_20 = 5598588684109516784ULL;
unsigned char var_21 = (unsigned char)197;
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
