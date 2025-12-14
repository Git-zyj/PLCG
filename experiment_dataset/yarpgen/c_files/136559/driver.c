#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_4 = 13600238725563152512ULL;
unsigned long long int var_5 = 9404191066322947563ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)29;
long long int var_19 = -371654640244765155LL;
unsigned char var_20 = (unsigned char)172;
void init() {
}

void checksum() {
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
