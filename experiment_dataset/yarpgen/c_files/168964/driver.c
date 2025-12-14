#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)623;
long long int var_9 = 3592509606609611426LL;
int zero = 0;
unsigned short var_15 = (unsigned short)31519;
int var_16 = -665103884;
unsigned long long int var_17 = 16613840907878436742ULL;
unsigned short var_18 = (unsigned short)60569;
unsigned long long int var_19 = 673917093104254983ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
