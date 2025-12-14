#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1567166881;
long long int var_2 = 9099922817788887963LL;
unsigned short var_5 = (unsigned short)771;
int var_10 = 1494866358;
unsigned short var_14 = (unsigned short)36663;
unsigned short var_17 = (unsigned short)45129;
unsigned short var_18 = (unsigned short)30132;
int zero = 0;
unsigned long long int var_20 = 18074770107511278032ULL;
int var_21 = -377508226;
unsigned char var_22 = (unsigned char)188;
unsigned short var_23 = (unsigned short)9411;
unsigned char var_24 = (unsigned char)165;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
