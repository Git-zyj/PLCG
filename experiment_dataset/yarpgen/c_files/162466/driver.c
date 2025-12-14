#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4239519502954276051ULL;
unsigned char var_2 = (unsigned char)198;
unsigned int var_6 = 253107105U;
unsigned short var_7 = (unsigned short)31483;
unsigned short var_8 = (unsigned short)7814;
int var_9 = 1287073303;
unsigned short var_10 = (unsigned short)33041;
unsigned char var_13 = (unsigned char)14;
unsigned long long int var_14 = 9106059078712647787ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)143;
short var_20 = (short)-26172;
unsigned long long int var_21 = 6117499600159722306ULL;
unsigned long long int var_22 = 9171608106775127159ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
