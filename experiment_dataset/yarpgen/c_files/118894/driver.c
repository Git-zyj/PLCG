#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)9920;
long long int var_7 = -5182334642252277449LL;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)216;
unsigned char var_11 = (unsigned char)188;
short var_13 = (short)26533;
unsigned char var_16 = (unsigned char)233;
int zero = 0;
long long int var_17 = 3473294510712758565LL;
unsigned char var_18 = (unsigned char)152;
unsigned char var_19 = (unsigned char)138;
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
