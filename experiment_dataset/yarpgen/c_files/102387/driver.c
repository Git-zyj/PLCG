#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1584040369988502625LL;
short var_5 = (short)-6280;
int var_15 = -1053757894;
unsigned long long int var_16 = 17356857158297605405ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)51139;
unsigned int var_19 = 3953975081U;
unsigned int var_20 = 1347465036U;
unsigned long long int var_21 = 12923291882255478354ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
