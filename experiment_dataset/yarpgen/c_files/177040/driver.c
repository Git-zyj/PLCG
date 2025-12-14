#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)119;
int var_9 = -1414589151;
short var_10 = (short)-8686;
int zero = 0;
unsigned int var_17 = 3622223981U;
unsigned long long int var_18 = 11317100170752032723ULL;
long long int var_19 = 4312319259840576647LL;
long long int var_20 = 5600117899046795537LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
