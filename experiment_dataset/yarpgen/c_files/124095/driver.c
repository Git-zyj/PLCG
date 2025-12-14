#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2284540116U;
unsigned long long int var_7 = 12720775280544405377ULL;
short var_10 = (short)30810;
int zero = 0;
unsigned int var_19 = 3946302477U;
unsigned short var_20 = (unsigned short)27599;
unsigned short var_21 = (unsigned short)43331;
short var_22 = (short)27077;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
