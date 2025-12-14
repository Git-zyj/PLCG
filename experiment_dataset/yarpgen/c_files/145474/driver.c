#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 8908134589639447195LL;
unsigned long long int var_5 = 5193582743569269941ULL;
short var_7 = (short)-16600;
int var_8 = -282309424;
short var_11 = (short)-25674;
int zero = 0;
long long int var_12 = 7020633105893887893LL;
unsigned short var_13 = (unsigned short)34169;
unsigned int var_14 = 3347732325U;
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
