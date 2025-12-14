#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1647828930;
int var_10 = 1690997634;
short var_13 = (short)-27050;
int var_15 = -298553014;
long long int var_16 = -479883916787714816LL;
unsigned int var_18 = 936745764U;
int zero = 0;
short var_20 = (short)7004;
long long int var_21 = 7159434949587912159LL;
short var_22 = (short)-29664;
unsigned char var_23 = (unsigned char)175;
unsigned short var_24 = (unsigned short)9704;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
