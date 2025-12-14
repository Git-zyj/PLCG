#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8976881491557916038LL;
unsigned long long int var_2 = 10498763585190159927ULL;
unsigned int var_3 = 4104135025U;
unsigned short var_10 = (unsigned short)19133;
int var_13 = 330666296;
int zero = 0;
unsigned long long int var_16 = 1828177432386147520ULL;
unsigned long long int var_17 = 6722443591833964478ULL;
unsigned int var_18 = 692679966U;
short var_19 = (short)24681;
unsigned short var_20 = (unsigned short)36079;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
