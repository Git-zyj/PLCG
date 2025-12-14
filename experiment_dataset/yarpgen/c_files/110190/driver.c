#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-11273;
unsigned int var_2 = 3920109758U;
unsigned short var_7 = (unsigned short)9311;
unsigned short var_14 = (unsigned short)6102;
int zero = 0;
unsigned short var_15 = (unsigned short)60372;
unsigned short var_16 = (unsigned short)32202;
unsigned int var_17 = 2691180107U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
