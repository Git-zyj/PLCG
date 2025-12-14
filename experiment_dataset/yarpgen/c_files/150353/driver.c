#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 792115797U;
unsigned long long int var_3 = 10738858414429342743ULL;
short var_6 = (short)30325;
unsigned char var_8 = (unsigned char)153;
int zero = 0;
long long int var_11 = 4303403020184994792LL;
unsigned long long int var_12 = 3956971388614937328ULL;
unsigned short var_13 = (unsigned short)21039;
int var_14 = 1179089651;
int var_15 = -416017955;
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
