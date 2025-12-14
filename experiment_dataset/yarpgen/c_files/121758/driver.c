#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)26;
long long int var_13 = 3772347127823164861LL;
int zero = 0;
unsigned short var_14 = (unsigned short)57899;
unsigned char var_15 = (unsigned char)69;
short var_16 = (short)18064;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
