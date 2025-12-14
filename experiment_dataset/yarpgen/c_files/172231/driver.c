#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 961331369796754387LL;
short var_4 = (short)9538;
unsigned char var_8 = (unsigned char)127;
unsigned int var_16 = 939354934U;
long long int var_18 = 8391135288373036008LL;
int zero = 0;
unsigned short var_19 = (unsigned short)9639;
unsigned int var_20 = 3389845765U;
void init() {
}

void checksum() {
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
