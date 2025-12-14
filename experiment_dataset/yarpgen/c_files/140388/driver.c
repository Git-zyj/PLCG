#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)147;
unsigned int var_2 = 1703028590U;
int var_5 = 1495887120;
unsigned long long int var_8 = 5467030898883704661ULL;
unsigned long long int var_9 = 11772293705022787584ULL;
int zero = 0;
unsigned int var_12 = 4166764516U;
long long int var_13 = -762900994534594936LL;
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
