#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6093483731477409469LL;
unsigned char var_2 = (unsigned char)247;
int var_6 = 1094446619;
unsigned char var_11 = (unsigned char)202;
int zero = 0;
unsigned char var_12 = (unsigned char)227;
long long int var_13 = 8863355120073007637LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
