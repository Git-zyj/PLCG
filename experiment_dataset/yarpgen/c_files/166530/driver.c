#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)141;
unsigned long long int var_2 = 12368881833914442524ULL;
unsigned long long int var_12 = 1223359982280972665ULL;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned char var_19 = (unsigned char)192;
_Bool var_20 = (_Bool)1;
long long int var_21 = 7511501605717484039LL;
short var_22 = (short)-4729;
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
