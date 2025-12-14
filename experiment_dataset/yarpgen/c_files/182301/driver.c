#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16030027481299254420ULL;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 434721460864035064ULL;
signed char var_6 = (signed char)75;
unsigned long long int var_7 = 16808666625769957873ULL;
unsigned short var_8 = (unsigned short)31164;
unsigned char var_9 = (unsigned char)172;
short var_10 = (short)16967;
int zero = 0;
short var_11 = (short)-13452;
unsigned long long int var_12 = 3564366156263747895ULL;
unsigned long long int var_13 = 2570530587497079577ULL;
unsigned long long int var_14 = 8962315493684122670ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
