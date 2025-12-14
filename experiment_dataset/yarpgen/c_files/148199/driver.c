#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-82;
unsigned char var_7 = (unsigned char)30;
int zero = 0;
short var_11 = (short)18259;
long long int var_12 = -1227860077749137989LL;
unsigned short var_13 = (unsigned short)39899;
unsigned char var_14 = (unsigned char)19;
unsigned long long int var_15 = 15304479569945982434ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
