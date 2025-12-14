#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 894555419;
short var_3 = (short)-11947;
short var_4 = (short)-12740;
signed char var_5 = (signed char)15;
int var_6 = 1205319888;
short var_7 = (short)-14632;
unsigned long long int var_8 = 14055828901686186618ULL;
int var_9 = 1571852335;
int var_10 = -1964148800;
int zero = 0;
short var_11 = (short)-28480;
unsigned char var_12 = (unsigned char)13;
long long int var_13 = -4774494525988984288LL;
unsigned long long int var_14 = 14575970630606804272ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
