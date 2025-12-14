#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 14701956446034602375ULL;
_Bool var_5 = (_Bool)1;
unsigned char var_7 = (unsigned char)62;
_Bool var_9 = (_Bool)0;
unsigned short var_16 = (unsigned short)26420;
signed char var_17 = (signed char)-101;
int zero = 0;
int var_20 = 1120750742;
signed char var_21 = (signed char)91;
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
