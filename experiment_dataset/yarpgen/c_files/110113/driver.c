#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6694517878421056809ULL;
unsigned short var_3 = (unsigned short)44440;
unsigned int var_5 = 2017995697U;
_Bool var_9 = (_Bool)1;
int zero = 0;
int var_12 = -1815567557;
unsigned int var_13 = 4210958385U;
unsigned char var_14 = (unsigned char)102;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
