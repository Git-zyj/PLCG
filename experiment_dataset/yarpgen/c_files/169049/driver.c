#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7044599915299620790LL;
unsigned char var_4 = (unsigned char)150;
signed char var_9 = (signed char)-34;
long long int var_14 = 6895468064056323240LL;
long long int var_15 = -8237735066615807393LL;
unsigned short var_16 = (unsigned short)1294;
int zero = 0;
signed char var_20 = (signed char)-48;
signed char var_21 = (signed char)-127;
void init() {
}

void checksum() {
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
