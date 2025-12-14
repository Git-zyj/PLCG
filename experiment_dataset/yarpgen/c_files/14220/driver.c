#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)147;
int var_3 = 1643737281;
unsigned char var_4 = (unsigned char)31;
long long int var_5 = 5240550181341949159LL;
long long int var_6 = 5766405415682697717LL;
unsigned char var_13 = (unsigned char)114;
long long int var_15 = 4633874575006006536LL;
int zero = 0;
unsigned char var_16 = (unsigned char)242;
unsigned char var_17 = (unsigned char)159;
int var_18 = -97131262;
int var_19 = 2033312122;
unsigned char var_20 = (unsigned char)115;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
