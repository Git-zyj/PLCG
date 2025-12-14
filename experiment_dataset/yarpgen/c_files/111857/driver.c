#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7432300993862590219ULL;
signed char var_4 = (signed char)98;
unsigned char var_5 = (unsigned char)86;
unsigned int var_6 = 1517922768U;
long long int var_7 = 3089303717738740115LL;
long long int var_8 = -3012986169062686332LL;
short var_10 = (short)28832;
int zero = 0;
unsigned char var_12 = (unsigned char)163;
short var_13 = (short)-1876;
long long int var_14 = -1042716210717744552LL;
signed char var_15 = (signed char)74;
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
