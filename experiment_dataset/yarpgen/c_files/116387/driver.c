#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)37938;
unsigned char var_5 = (unsigned char)185;
int var_7 = 508114879;
unsigned short var_9 = (unsigned short)3408;
unsigned char var_14 = (unsigned char)215;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned int var_19 = 1083772065U;
short var_20 = (short)21948;
_Bool var_21 = (_Bool)1;
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
