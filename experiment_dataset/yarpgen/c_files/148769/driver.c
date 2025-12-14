#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 1630242824488453661LL;
unsigned short var_8 = (unsigned short)22039;
short var_10 = (short)17768;
int zero = 0;
unsigned long long int var_19 = 8830384322138670831ULL;
unsigned short var_20 = (unsigned short)21576;
unsigned char var_21 = (unsigned char)241;
long long int var_22 = -4884254659612359547LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
