#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-104;
signed char var_1 = (signed char)80;
long long int var_2 = -8622191739175096560LL;
unsigned long long int var_3 = 14290681482291481391ULL;
int var_5 = 1353065321;
unsigned int var_6 = 1589993758U;
unsigned int var_9 = 1564742160U;
unsigned long long int var_12 = 13512162274160915173ULL;
int zero = 0;
int var_13 = -1631782866;
int var_14 = 372280489;
signed char var_15 = (signed char)38;
int var_16 = 1398522374;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
