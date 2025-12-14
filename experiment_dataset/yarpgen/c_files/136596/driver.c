#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2030116607U;
unsigned int var_2 = 3061502463U;
int var_5 = -673906951;
int var_6 = -989572529;
unsigned short var_8 = (unsigned short)40217;
unsigned short var_13 = (unsigned short)20052;
unsigned short var_17 = (unsigned short)26793;
int zero = 0;
short var_18 = (short)12865;
unsigned short var_19 = (unsigned short)29853;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
