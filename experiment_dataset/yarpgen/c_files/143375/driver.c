#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)22656;
int var_3 = 1192704671;
unsigned long long int var_4 = 14056072355972099047ULL;
int var_5 = 1276435105;
signed char var_7 = (signed char)5;
unsigned char var_9 = (unsigned char)40;
unsigned int var_10 = 1460085403U;
int zero = 0;
long long int var_11 = -2528041259287252017LL;
int var_12 = 121892808;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
