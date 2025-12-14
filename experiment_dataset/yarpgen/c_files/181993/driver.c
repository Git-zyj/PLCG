#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8755974443505561705LL;
unsigned short var_1 = (unsigned short)33664;
unsigned long long int var_8 = 1310660415271523347ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)63703;
unsigned long long int var_15 = 13016493302428645242ULL;
int var_16 = 1972748790;
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
