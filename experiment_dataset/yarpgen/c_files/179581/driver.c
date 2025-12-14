#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8605;
long long int var_1 = -3387847100215290420LL;
unsigned int var_2 = 340270350U;
int var_3 = -1177103104;
unsigned char var_5 = (unsigned char)255;
int var_7 = -671591138;
unsigned long long int var_8 = 10516744545731493139ULL;
unsigned long long int var_9 = 14406614976999055451ULL;
int zero = 0;
long long int var_11 = 3858208492529125188LL;
int var_12 = -1182112633;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
