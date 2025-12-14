#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-105;
unsigned int var_2 = 1926907308U;
signed char var_4 = (signed char)118;
unsigned char var_9 = (unsigned char)224;
long long int var_11 = 390907116593790625LL;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned short var_17 = (unsigned short)59596;
unsigned char var_18 = (unsigned char)218;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
