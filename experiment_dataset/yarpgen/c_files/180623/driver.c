#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)4;
unsigned char var_9 = (unsigned char)206;
unsigned char var_11 = (unsigned char)163;
unsigned char var_12 = (unsigned char)122;
unsigned char var_14 = (unsigned char)123;
unsigned char var_15 = (unsigned char)50;
unsigned char var_18 = (unsigned char)49;
int zero = 0;
unsigned char var_19 = (unsigned char)155;
unsigned char var_20 = (unsigned char)200;
unsigned char var_21 = (unsigned char)208;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
