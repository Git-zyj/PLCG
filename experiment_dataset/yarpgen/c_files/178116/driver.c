#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)97;
_Bool var_4 = (_Bool)1;
short var_7 = (short)15203;
int var_8 = 91284831;
int zero = 0;
unsigned short var_11 = (unsigned short)9890;
int var_12 = -191760599;
unsigned short var_13 = (unsigned short)20059;
int var_14 = -984757666;
unsigned short var_15 = (unsigned short)32868;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
