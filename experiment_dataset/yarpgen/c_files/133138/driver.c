#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_10 = 15242962484312486362ULL;
signed char var_12 = (signed char)-52;
int zero = 0;
unsigned int var_19 = 157737767U;
unsigned long long int var_20 = 12735762085184559980ULL;
long long int var_21 = -6908829048967937712LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
