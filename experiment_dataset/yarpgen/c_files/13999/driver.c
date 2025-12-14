#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4091655327583933835ULL;
int var_1 = 374549435;
int var_5 = 116757207;
unsigned long long int var_9 = 16573889011981602527ULL;
int zero = 0;
signed char var_15 = (signed char)-37;
unsigned short var_16 = (unsigned short)30035;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
