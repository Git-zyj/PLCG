#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5026960127544558437ULL;
short var_3 = (short)23398;
signed char var_4 = (signed char)105;
short var_6 = (short)-87;
unsigned long long int var_8 = 3957003483495094829ULL;
short var_13 = (short)-16807;
int zero = 0;
signed char var_16 = (signed char)68;
unsigned short var_17 = (unsigned short)29907;
int var_18 = 1785715051;
signed char var_19 = (signed char)-10;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
