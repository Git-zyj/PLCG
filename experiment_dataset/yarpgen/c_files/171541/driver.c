#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)60781;
int var_8 = 17717917;
long long int var_9 = -1420690897648838356LL;
unsigned short var_12 = (unsigned short)1827;
int zero = 0;
long long int var_13 = -6105356460098170136LL;
unsigned int var_14 = 2924656959U;
long long int var_15 = 2503879737107053166LL;
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
