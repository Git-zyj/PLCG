#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -246393806;
int var_5 = -1296708047;
int zero = 0;
unsigned int var_10 = 842578936U;
unsigned short var_11 = (unsigned short)14085;
long long int var_12 = 3583004291912361445LL;
unsigned char var_13 = (unsigned char)116;
unsigned short var_14 = (unsigned short)18245;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
