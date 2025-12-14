#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16661397743980719509ULL;
unsigned long long int var_5 = 3146392662606601067ULL;
long long int var_9 = -5130899329010746473LL;
int zero = 0;
short var_13 = (short)4396;
int var_14 = 191347846;
unsigned short var_15 = (unsigned short)18485;
unsigned long long int var_16 = 15320671619360278005ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
