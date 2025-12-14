#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 753399390;
unsigned short var_2 = (unsigned short)18083;
long long int var_3 = -1801371362805236580LL;
unsigned long long int var_5 = 4704848645288793753ULL;
int var_6 = 582036707;
int zero = 0;
int var_10 = -2037259656;
unsigned int var_11 = 2391556559U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
