#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)163;
short var_3 = (short)11160;
unsigned short var_5 = (unsigned short)26465;
int var_7 = 1421663594;
unsigned long long int var_9 = 8903868609494140264ULL;
int zero = 0;
signed char var_12 = (signed char)5;
long long int var_13 = 2197951851615609168LL;
unsigned char var_14 = (unsigned char)31;
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
