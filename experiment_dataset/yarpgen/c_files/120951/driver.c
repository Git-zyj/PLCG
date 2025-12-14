#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -5786250416941172654LL;
long long int var_9 = 4364125585497268377LL;
long long int var_18 = 4509114259920853364LL;
int zero = 0;
long long int var_20 = -8213703017356476482LL;
long long int var_21 = 8160790040572703040LL;
long long int var_22 = -4321032445608323655LL;
void init() {
}

void checksum() {
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
