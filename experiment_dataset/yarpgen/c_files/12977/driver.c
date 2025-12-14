#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_9 = (unsigned short)36448;
long long int var_14 = 2984700836608045067LL;
int var_17 = 57674203;
int var_18 = -726447695;
int zero = 0;
long long int var_19 = 8541938497753405119LL;
unsigned long long int var_20 = 10247814987163437721ULL;
unsigned char var_21 = (unsigned char)185;
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
