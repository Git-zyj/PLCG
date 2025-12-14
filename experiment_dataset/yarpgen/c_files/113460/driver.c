#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5060194228931793707LL;
int var_4 = -413447296;
unsigned short var_9 = (unsigned short)38676;
short var_12 = (short)562;
long long int var_13 = -6239643991626530758LL;
unsigned int var_15 = 4263378113U;
unsigned short var_16 = (unsigned short)60743;
int zero = 0;
unsigned int var_17 = 1998278161U;
unsigned int var_18 = 1802916036U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
