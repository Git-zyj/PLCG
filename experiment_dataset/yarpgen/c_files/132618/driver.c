#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13757942089979538683ULL;
signed char var_4 = (signed char)122;
unsigned short var_5 = (unsigned short)37099;
long long int var_8 = -4323574336609430810LL;
signed char var_9 = (signed char)37;
int zero = 0;
unsigned char var_10 = (unsigned char)228;
unsigned short var_11 = (unsigned short)55903;
signed char var_12 = (signed char)-21;
unsigned long long int var_13 = 1160199040836674090ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
