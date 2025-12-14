#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)240;
signed char var_1 = (signed char)102;
int var_3 = -437749441;
signed char var_6 = (signed char)83;
int var_7 = -1956564061;
int zero = 0;
signed char var_11 = (signed char)0;
signed char var_12 = (signed char)-68;
long long int var_13 = 3624570262054693895LL;
unsigned char var_14 = (unsigned char)3;
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
