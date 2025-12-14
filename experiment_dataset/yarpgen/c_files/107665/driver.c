#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4288585840U;
unsigned int var_2 = 3073060364U;
unsigned int var_7 = 3559688584U;
long long int var_8 = -2125566981312319301LL;
long long int var_11 = -4039778550814132667LL;
signed char var_12 = (signed char)-80;
int zero = 0;
unsigned char var_16 = (unsigned char)151;
unsigned long long int var_17 = 16037552522102184951ULL;
void init() {
}

void checksum() {
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
