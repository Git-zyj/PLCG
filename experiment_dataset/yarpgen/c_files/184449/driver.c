#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6680992767597458279LL;
short var_9 = (short)-3611;
unsigned long long int var_13 = 4625737678112658252ULL;
long long int var_15 = -8298680541653973985LL;
int zero = 0;
unsigned long long int var_16 = 11815612719397375656ULL;
unsigned char var_17 = (unsigned char)58;
int var_18 = -516985967;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
