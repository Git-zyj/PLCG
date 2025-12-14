#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)50542;
unsigned short var_6 = (unsigned short)12506;
unsigned int var_7 = 543251020U;
short var_8 = (short)-13587;
unsigned char var_9 = (unsigned char)5;
unsigned short var_10 = (unsigned short)46770;
unsigned short var_13 = (unsigned short)35021;
int zero = 0;
int var_14 = -1810102240;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
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
