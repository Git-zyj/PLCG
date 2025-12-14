#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 339564663;
unsigned int var_2 = 3977633429U;
int var_3 = 626380550;
long long int var_14 = 4221733072440903444LL;
short var_19 = (short)866;
int zero = 0;
int var_20 = -88841958;
int var_21 = 1874554875;
unsigned char var_22 = (unsigned char)247;
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
