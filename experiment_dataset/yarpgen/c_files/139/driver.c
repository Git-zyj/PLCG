#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)4926;
unsigned int var_6 = 931370759U;
short var_8 = (short)22210;
unsigned char var_13 = (unsigned char)163;
int var_16 = 1588493650;
int zero = 0;
long long int var_18 = 593025111703752712LL;
unsigned long long int var_19 = 3466286967562996048ULL;
unsigned char var_20 = (unsigned char)55;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
