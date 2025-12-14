#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1305453787432250234LL;
long long int var_7 = 5587030161473536274LL;
short var_12 = (short)12512;
int zero = 0;
unsigned char var_17 = (unsigned char)115;
unsigned char var_18 = (unsigned char)29;
unsigned int var_19 = 3809449636U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
