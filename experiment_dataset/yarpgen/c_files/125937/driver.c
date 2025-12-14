#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59362;
unsigned short var_1 = (unsigned short)3163;
unsigned short var_4 = (unsigned short)25209;
unsigned short var_5 = (unsigned short)59360;
unsigned short var_7 = (unsigned short)58277;
unsigned short var_8 = (unsigned short)15918;
int zero = 0;
unsigned short var_10 = (unsigned short)9299;
unsigned short var_11 = (unsigned short)55694;
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
