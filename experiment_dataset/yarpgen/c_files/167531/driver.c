#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1441835556U;
unsigned char var_1 = (unsigned char)205;
short var_3 = (short)-28948;
long long int var_4 = -59433019201200250LL;
unsigned int var_7 = 970992473U;
unsigned long long int var_8 = 5649967370001717431ULL;
unsigned int var_9 = 1380881729U;
unsigned short var_11 = (unsigned short)8755;
short var_12 = (short)-20914;
signed char var_15 = (signed char)-4;
int var_17 = -630112492;
int zero = 0;
unsigned int var_19 = 2569347758U;
unsigned long long int var_20 = 9024530722225513110ULL;
unsigned short var_21 = (unsigned short)45500;
unsigned char var_22 = (unsigned char)214;
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
