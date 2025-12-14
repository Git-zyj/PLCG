#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21386;
unsigned char var_5 = (unsigned char)132;
long long int var_7 = -1431198415726918038LL;
short var_8 = (short)31649;
unsigned char var_9 = (unsigned char)253;
long long int var_10 = 4331132729265643334LL;
int zero = 0;
short var_13 = (short)-14796;
signed char var_14 = (signed char)118;
unsigned int var_15 = 3089115727U;
void init() {
}

void checksum() {
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
