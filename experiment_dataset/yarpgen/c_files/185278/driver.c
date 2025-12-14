#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)50798;
long long int var_5 = 8598984285433238743LL;
unsigned char var_8 = (unsigned char)224;
short var_9 = (short)29375;
short var_11 = (short)18107;
int var_12 = -915481491;
_Bool var_13 = (_Bool)0;
int zero = 0;
int var_14 = -997154794;
unsigned short var_15 = (unsigned short)45363;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)19142;
signed char var_18 = (signed char)16;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
