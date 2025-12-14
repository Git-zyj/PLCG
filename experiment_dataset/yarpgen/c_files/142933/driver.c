#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)100;
unsigned short var_4 = (unsigned short)5391;
signed char var_6 = (signed char)49;
int var_8 = -1553388127;
int zero = 0;
short var_12 = (short)25736;
short var_13 = (short)-2283;
long long int var_14 = 6066229943256371975LL;
unsigned int var_15 = 1976928448U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
