#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15147;
unsigned long long int var_3 = 8517575924486980516ULL;
int var_7 = 324445249;
unsigned long long int var_8 = 9091841711358767770ULL;
unsigned char var_11 = (unsigned char)217;
int zero = 0;
int var_12 = -609902485;
short var_13 = (short)-10124;
unsigned short var_14 = (unsigned short)61754;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
