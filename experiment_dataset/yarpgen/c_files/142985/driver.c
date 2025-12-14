#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14863605902970167119ULL;
unsigned short var_5 = (unsigned short)2942;
short var_7 = (short)9367;
short var_12 = (short)-7521;
unsigned long long int var_13 = 5006353928835323159ULL;
unsigned int var_15 = 4017730091U;
int zero = 0;
int var_20 = 603841107;
short var_21 = (short)-18575;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
