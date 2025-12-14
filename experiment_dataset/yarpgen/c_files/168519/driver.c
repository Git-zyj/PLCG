#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 5228198211982822561ULL;
unsigned short var_5 = (unsigned short)57670;
unsigned short var_6 = (unsigned short)38361;
short var_10 = (short)-14371;
short var_11 = (short)29375;
unsigned short var_15 = (unsigned short)31947;
unsigned short var_16 = (unsigned short)13360;
int zero = 0;
signed char var_17 = (signed char)-29;
signed char var_18 = (signed char)-88;
short var_19 = (short)-4185;
unsigned short var_20 = (unsigned short)38743;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
