#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13399690137385055465ULL;
signed char var_6 = (signed char)112;
long long int var_7 = 6857781941289434355LL;
unsigned short var_8 = (unsigned short)52732;
int zero = 0;
unsigned long long int var_10 = 11612164938677598487ULL;
short var_11 = (short)-8510;
signed char var_12 = (signed char)43;
unsigned long long int var_13 = 10721029826286784363ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
