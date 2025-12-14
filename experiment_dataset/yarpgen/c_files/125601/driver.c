#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -870289016;
unsigned short var_6 = (unsigned short)57251;
unsigned char var_7 = (unsigned char)239;
long long int var_11 = 6680954856630450538LL;
unsigned short var_16 = (unsigned short)49295;
int zero = 0;
int var_17 = -761357597;
short var_18 = (short)4627;
int var_19 = -1169582695;
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
