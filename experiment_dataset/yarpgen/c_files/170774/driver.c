#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1100582478;
unsigned char var_5 = (unsigned char)243;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 3354885374U;
int zero = 0;
signed char var_10 = (signed char)33;
unsigned char var_11 = (unsigned char)93;
unsigned long long int var_12 = 12342388781832273398ULL;
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
