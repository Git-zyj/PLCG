#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1963649543;
unsigned short var_3 = (unsigned short)36996;
signed char var_7 = (signed char)4;
long long int var_10 = 4035231251138238856LL;
long long int var_11 = -2523089298147575219LL;
int zero = 0;
unsigned int var_12 = 2668678448U;
int var_13 = -555330433;
long long int var_14 = 90454033342521211LL;
void init() {
}

void checksum() {
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
