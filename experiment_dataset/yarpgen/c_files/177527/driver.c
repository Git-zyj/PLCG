#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1284284708U;
unsigned int var_6 = 3137160485U;
int zero = 0;
unsigned char var_12 = (unsigned char)20;
unsigned long long int var_13 = 10152023408807839731ULL;
unsigned short var_14 = (unsigned short)32331;
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
