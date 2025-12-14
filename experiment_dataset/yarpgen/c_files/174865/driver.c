#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1616544578;
signed char var_8 = (signed char)30;
int var_10 = 726780307;
int zero = 0;
unsigned short var_19 = (unsigned short)51150;
unsigned long long int var_20 = 5409910484501256317ULL;
long long int var_21 = -5798575387350212086LL;
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
