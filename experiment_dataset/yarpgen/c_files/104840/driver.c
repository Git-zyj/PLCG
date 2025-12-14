#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)14195;
unsigned short var_3 = (unsigned short)64839;
unsigned short var_7 = (unsigned short)43300;
short var_8 = (short)-10689;
unsigned short var_9 = (unsigned short)20183;
int zero = 0;
short var_10 = (short)23193;
unsigned short var_11 = (unsigned short)51366;
unsigned short var_12 = (unsigned short)60708;
unsigned short var_13 = (unsigned short)51891;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
