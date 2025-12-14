#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1614883340;
short var_2 = (short)32106;
signed char var_6 = (signed char)-92;
unsigned short var_7 = (unsigned short)57236;
unsigned char var_9 = (unsigned char)132;
unsigned int var_11 = 4125088670U;
unsigned short var_13 = (unsigned short)49907;
int zero = 0;
int var_15 = -713392747;
int var_16 = 259576181;
unsigned long long int var_17 = 7868943463477386641ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
