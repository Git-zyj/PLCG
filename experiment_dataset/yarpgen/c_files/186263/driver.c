#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1561303481705320092LL;
unsigned long long int var_7 = 1804498801462691819ULL;
unsigned long long int var_15 = 11277474030592420983ULL;
unsigned long long int var_16 = 9653077200671019236ULL;
long long int var_17 = 3614659712286805048LL;
int var_18 = -875195807;
unsigned char var_19 = (unsigned char)125;
int zero = 0;
unsigned char var_20 = (unsigned char)103;
unsigned long long int var_21 = 12473974458212781126ULL;
unsigned char var_22 = (unsigned char)127;
void init() {
}

void checksum() {
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
