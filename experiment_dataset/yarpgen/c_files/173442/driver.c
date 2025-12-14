#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-34;
unsigned char var_3 = (unsigned char)1;
long long int var_7 = -7000328113543464645LL;
short var_18 = (short)5520;
int zero = 0;
unsigned long long int var_19 = 12923796140039665865ULL;
unsigned long long int var_20 = 14849009452389504974ULL;
long long int var_21 = 5626962662653584113LL;
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
