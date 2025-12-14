#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)171;
_Bool var_2 = (_Bool)1;
int var_3 = 503703227;
unsigned short var_4 = (unsigned short)62272;
long long int var_5 = 8758701257989160631LL;
unsigned short var_9 = (unsigned short)22016;
int zero = 0;
unsigned long long int var_10 = 17851986447616954154ULL;
signed char var_11 = (signed char)55;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
