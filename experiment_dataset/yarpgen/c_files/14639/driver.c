#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 733580149564196796LL;
long long int var_3 = 5133262507922333257LL;
unsigned char var_4 = (unsigned char)43;
unsigned int var_6 = 1397372953U;
unsigned long long int var_7 = 11053944646170437048ULL;
short var_8 = (short)4738;
unsigned short var_10 = (unsigned short)62579;
long long int var_11 = -2672589371552379013LL;
short var_13 = (short)5798;
signed char var_14 = (signed char)45;
short var_17 = (short)29475;
int zero = 0;
unsigned char var_19 = (unsigned char)141;
int var_20 = 1031901758;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
