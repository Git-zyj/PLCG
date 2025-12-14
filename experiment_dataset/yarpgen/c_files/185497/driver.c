#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 381149232U;
unsigned long long int var_2 = 3831187140235379421ULL;
int zero = 0;
signed char var_20 = (signed char)-92;
unsigned long long int var_21 = 15288099599233301283ULL;
unsigned short var_22 = (unsigned short)64224;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
