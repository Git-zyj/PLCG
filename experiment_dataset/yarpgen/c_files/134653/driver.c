#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2882109001U;
long long int var_2 = -3927687899249553323LL;
long long int var_8 = -5524178053800608020LL;
int var_9 = 1229385992;
int zero = 0;
unsigned int var_12 = 3375027538U;
unsigned long long int var_13 = 4051814148206224805ULL;
unsigned char var_14 = (unsigned char)54;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
