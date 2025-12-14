#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12456997337486436140ULL;
unsigned short var_10 = (unsigned short)32721;
long long int var_11 = 4931228373156185760LL;
int zero = 0;
long long int var_15 = 7052797781827286042LL;
unsigned char var_16 = (unsigned char)233;
unsigned long long int var_17 = 9324887602145625946ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
