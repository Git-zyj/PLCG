#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 352441835099914148LL;
unsigned short var_3 = (unsigned short)22529;
unsigned int var_4 = 2272593048U;
int zero = 0;
unsigned long long int var_13 = 13704085607669293347ULL;
unsigned char var_14 = (unsigned char)149;
unsigned short var_15 = (unsigned short)52609;
void init() {
}

void checksum() {
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
