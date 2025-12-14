#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)23062;
unsigned long long int var_3 = 4250735487000334832ULL;
unsigned int var_9 = 2988544574U;
int zero = 0;
unsigned int var_10 = 2933382012U;
long long int var_11 = -8198918223378404639LL;
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
