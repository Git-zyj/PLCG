#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_2 = 2039041670;
unsigned char var_4 = (unsigned char)211;
signed char var_5 = (signed char)-109;
short var_7 = (short)25617;
signed char var_10 = (signed char)-75;
short var_11 = (short)15517;
int var_14 = 1519671798;
int zero = 0;
signed char var_15 = (signed char)-72;
int var_16 = -1247692251;
int var_17 = 478752739;
signed char var_18 = (signed char)38;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
