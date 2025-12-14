#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 12356516328237556349ULL;
unsigned long long int var_10 = 15593514035829815560ULL;
unsigned long long int var_11 = 5817067592886761602ULL;
int zero = 0;
int var_12 = -1379329976;
short var_13 = (short)22608;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
