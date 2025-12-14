#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7128024759372804830LL;
unsigned int var_1 = 2374984637U;
unsigned char var_5 = (unsigned char)108;
unsigned int var_6 = 104265725U;
long long int var_7 = 4599092605963115469LL;
unsigned short var_8 = (unsigned short)34337;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned long long int var_12 = 6383849581569453623ULL;
unsigned long long int var_13 = 652422990907697879ULL;
unsigned int var_14 = 3290119490U;
unsigned short var_15 = (unsigned short)48028;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
