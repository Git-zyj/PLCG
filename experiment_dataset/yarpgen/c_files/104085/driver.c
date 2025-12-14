#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 4161448306U;
int var_6 = -1201058036;
unsigned int var_13 = 3294556153U;
int var_16 = 468346448;
int zero = 0;
unsigned long long int var_20 = 5447997925167410969ULL;
long long int var_21 = 6733251142441190644LL;
unsigned long long int var_22 = 16227076197672159084ULL;
void init() {
}

void checksum() {
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
