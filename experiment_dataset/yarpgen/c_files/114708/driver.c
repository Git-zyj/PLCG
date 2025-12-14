#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 880894796;
unsigned long long int var_4 = 8419810542113133150ULL;
short var_12 = (short)-24433;
int zero = 0;
unsigned short var_13 = (unsigned short)60590;
long long int var_14 = -1189777581225655106LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
