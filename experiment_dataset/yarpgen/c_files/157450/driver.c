#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-12886;
long long int var_1 = 1995266592649235688LL;
long long int var_4 = -8766801745576632263LL;
long long int var_7 = 3436668113005665607LL;
unsigned short var_13 = (unsigned short)49805;
signed char var_16 = (signed char)68;
int zero = 0;
long long int var_19 = -7029854800750570721LL;
int var_20 = -1517681449;
long long int var_21 = 218438234153062245LL;
void init() {
}

void checksum() {
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
