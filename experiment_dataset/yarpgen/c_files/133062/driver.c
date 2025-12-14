#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)84;
unsigned int var_3 = 3939671742U;
long long int var_5 = 7803527725131258516LL;
unsigned char var_7 = (unsigned char)10;
unsigned int var_10 = 913015807U;
int zero = 0;
long long int var_11 = 5749462376385477629LL;
long long int var_12 = 1145418883574717809LL;
unsigned char var_13 = (unsigned char)85;
void init() {
}

void checksum() {
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
