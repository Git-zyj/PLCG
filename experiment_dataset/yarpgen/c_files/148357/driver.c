#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6500353569031005163LL;
unsigned long long int var_2 = 10062963961385584372ULL;
unsigned long long int var_6 = 15116562652033301906ULL;
unsigned int var_8 = 4283146176U;
unsigned long long int var_11 = 12792586146362159694ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)8608;
unsigned long long int var_15 = 15781522232022977144ULL;
unsigned long long int var_16 = 9975798874546517926ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
