#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14104276668044582814ULL;
long long int var_7 = 2029123422184103023LL;
unsigned long long int var_8 = 12534586268943289264ULL;
signed char var_17 = (signed char)-105;
int zero = 0;
unsigned int var_20 = 1267752968U;
unsigned char var_21 = (unsigned char)110;
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
