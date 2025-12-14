#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 17089543642447250353ULL;
short var_10 = (short)-20439;
unsigned long long int var_11 = 14878730180210936380ULL;
unsigned long long int var_13 = 11199966540768308389ULL;
int zero = 0;
short var_17 = (short)-30651;
short var_18 = (short)-29065;
short var_19 = (short)-26959;
unsigned long long int var_20 = 9867706908111296068ULL;
unsigned long long int var_21 = 18036193256605671096ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
