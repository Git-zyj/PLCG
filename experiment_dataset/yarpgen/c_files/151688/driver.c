#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)22796;
long long int var_1 = -5004354262653856782LL;
unsigned int var_4 = 2817157220U;
int var_5 = -1227698643;
unsigned int var_6 = 1822362145U;
long long int var_7 = 5685243650095064694LL;
_Bool var_8 = (_Bool)1;
unsigned int var_11 = 3679798645U;
int var_15 = -1452869672;
int zero = 0;
unsigned char var_16 = (unsigned char)203;
int var_17 = 1639021149;
unsigned long long int var_18 = 10684704195039200932ULL;
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
