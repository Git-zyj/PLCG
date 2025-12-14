#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1078437976;
short var_2 = (short)-21178;
signed char var_6 = (signed char)32;
int var_9 = -796541716;
int zero = 0;
int var_11 = -1372367190;
unsigned int var_12 = 3520265661U;
signed char var_13 = (signed char)65;
long long int var_14 = 7429512029213026886LL;
unsigned int var_15 = 962400216U;
unsigned short var_16 = (unsigned short)43178;
short var_17 = (short)-4041;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
