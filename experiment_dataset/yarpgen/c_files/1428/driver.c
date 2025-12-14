#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)111;
unsigned int var_2 = 504820649U;
long long int var_9 = 1602796368324844750LL;
int zero = 0;
long long int var_16 = -7205619803169517160LL;
long long int var_17 = 1096213130969800276LL;
int var_18 = 1420346879;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
