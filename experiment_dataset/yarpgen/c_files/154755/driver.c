#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-4;
int var_2 = -148158297;
signed char var_5 = (signed char)-107;
unsigned char var_9 = (unsigned char)18;
signed char var_10 = (signed char)-11;
long long int var_12 = -5987267567697868333LL;
int zero = 0;
unsigned int var_16 = 3646457376U;
unsigned int var_17 = 2744984742U;
unsigned long long int var_18 = 16220025578034122432ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
