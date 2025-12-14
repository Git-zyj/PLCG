#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13173037042495628335ULL;
unsigned short var_2 = (unsigned short)48420;
long long int var_3 = -8743777796707869260LL;
signed char var_4 = (signed char)-53;
unsigned int var_5 = 1369638716U;
long long int var_8 = -8480596801836659199LL;
unsigned short var_9 = (unsigned short)40499;
int zero = 0;
unsigned short var_10 = (unsigned short)4343;
unsigned int var_11 = 1616945682U;
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
