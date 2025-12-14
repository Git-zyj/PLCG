#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 7749815115369331099ULL;
int var_2 = 950915197;
unsigned char var_6 = (unsigned char)177;
unsigned long long int var_7 = 11174070645130958412ULL;
signed char var_9 = (signed char)105;
int var_11 = 389364099;
int zero = 0;
short var_13 = (short)-28040;
int var_14 = 1189409634;
signed char var_15 = (signed char)2;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
