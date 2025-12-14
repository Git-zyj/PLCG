#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)106;
long long int var_5 = -9217846522435005480LL;
unsigned int var_6 = 1037235002U;
int zero = 0;
unsigned short var_10 = (unsigned short)43292;
short var_11 = (short)-18117;
unsigned short var_12 = (unsigned short)24553;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
