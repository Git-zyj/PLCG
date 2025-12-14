#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)13912;
unsigned long long int var_5 = 512259269857785896ULL;
unsigned long long int var_6 = 891951669073795794ULL;
long long int var_7 = 6434056764226524533LL;
long long int var_9 = 1431189338130066122LL;
short var_10 = (short)1308;
long long int var_14 = -3744884352920973716LL;
int zero = 0;
long long int var_17 = -6017105767624078813LL;
long long int var_18 = 2140026601353974812LL;
signed char var_19 = (signed char)104;
unsigned char var_20 = (unsigned char)206;
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
