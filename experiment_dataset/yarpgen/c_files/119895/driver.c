#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2824961355U;
short var_3 = (short)28664;
unsigned long long int var_4 = 11187537603392510953ULL;
long long int var_5 = -7422477001385903586LL;
short var_6 = (short)-26358;
signed char var_8 = (signed char)2;
unsigned short var_11 = (unsigned short)38676;
int zero = 0;
short var_12 = (short)11087;
unsigned short var_13 = (unsigned short)22042;
long long int var_14 = 1603074588767226364LL;
unsigned int var_15 = 4127260339U;
unsigned long long int var_16 = 12829625913973344861ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
