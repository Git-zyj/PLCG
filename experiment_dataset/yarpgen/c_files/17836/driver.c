#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)112;
signed char var_3 = (signed char)-94;
unsigned long long int var_4 = 6114695057641564389ULL;
unsigned long long int var_8 = 12251692194330594603ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)26996;
short var_12 = (short)3994;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 14659875239191700823ULL;
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
