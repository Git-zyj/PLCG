#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1135567321U;
int var_2 = 2109730931;
unsigned long long int var_3 = 3997370598011715203ULL;
int var_4 = 296504806;
unsigned char var_6 = (unsigned char)175;
unsigned int var_7 = 2743251928U;
unsigned char var_8 = (unsigned char)81;
int zero = 0;
short var_10 = (short)5345;
unsigned int var_11 = 2409917087U;
long long int var_12 = -2926439133827307394LL;
unsigned int var_13 = 2424280803U;
unsigned short var_14 = (unsigned short)27192;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
