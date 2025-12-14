#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 909193531519822562ULL;
short var_1 = (short)-24476;
short var_5 = (short)-18320;
_Bool var_8 = (_Bool)1;
_Bool var_10 = (_Bool)1;
unsigned long long int var_14 = 2296620775538841604ULL;
short var_15 = (short)17654;
int zero = 0;
unsigned char var_16 = (unsigned char)89;
unsigned long long int var_17 = 977076580050367758ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
