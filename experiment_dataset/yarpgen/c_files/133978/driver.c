#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1466372953U;
unsigned char var_2 = (unsigned char)21;
short var_3 = (short)31412;
int var_4 = -204102413;
unsigned char var_6 = (unsigned char)248;
long long int var_7 = -7759658243710818377LL;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)114;
int zero = 0;
signed char var_13 = (signed char)83;
unsigned char var_14 = (unsigned char)141;
void init() {
}

void checksum() {
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
