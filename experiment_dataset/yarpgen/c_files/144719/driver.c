#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 850119617;
unsigned char var_3 = (unsigned char)252;
short var_4 = (short)-19326;
unsigned long long int var_5 = 1072938236286947819ULL;
_Bool var_6 = (_Bool)1;
int var_8 = -1564481682;
unsigned int var_10 = 1142084775U;
int zero = 0;
signed char var_12 = (signed char)2;
unsigned char var_13 = (unsigned char)138;
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
