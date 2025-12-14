#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -859192288;
short var_3 = (short)3937;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 3640759425U;
unsigned char var_6 = (unsigned char)116;
short var_8 = (short)9857;
unsigned long long int var_10 = 16230086116832247947ULL;
int zero = 0;
int var_12 = -1288838018;
long long int var_13 = -2834810333135717296LL;
unsigned int var_14 = 1489434362U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
