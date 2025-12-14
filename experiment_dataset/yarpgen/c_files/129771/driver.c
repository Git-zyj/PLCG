#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -2081315256;
signed char var_5 = (signed char)58;
unsigned long long int var_7 = 13858715409842886530ULL;
unsigned long long int var_9 = 18188427979932971517ULL;
signed char var_10 = (signed char)-107;
int var_11 = -1073062282;
int zero = 0;
signed char var_14 = (signed char)-71;
int var_15 = -1425426496;
long long int var_16 = -8960667199291616580LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
