#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 610388453;
int var_6 = -1072510486;
unsigned short var_15 = (unsigned short)20185;
unsigned char var_16 = (unsigned char)127;
int zero = 0;
int var_18 = 18494934;
short var_19 = (short)14752;
unsigned long long int var_20 = 5112018534549185653ULL;
int var_21 = -1588718448;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
