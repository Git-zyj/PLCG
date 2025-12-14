#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)39123;
unsigned short var_3 = (unsigned short)51954;
unsigned short var_4 = (unsigned short)14961;
long long int var_10 = -4288842626263019933LL;
long long int var_11 = -2460927368945094635LL;
int zero = 0;
long long int var_19 = 5114602020587584297LL;
long long int var_20 = -8775457780000146433LL;
unsigned short var_21 = (unsigned short)17792;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
