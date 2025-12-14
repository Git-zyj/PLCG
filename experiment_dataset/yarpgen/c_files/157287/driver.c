#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
int var_4 = -111783763;
unsigned long long int var_5 = 15682615786043029865ULL;
unsigned char var_6 = (unsigned char)128;
long long int var_7 = -7067184251215006642LL;
unsigned short var_8 = (unsigned short)54558;
int zero = 0;
unsigned long long int var_10 = 8023676850835916817ULL;
signed char var_11 = (signed char)81;
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
