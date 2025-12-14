#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1495711884U;
signed char var_1 = (signed char)105;
short var_10 = (short)18898;
unsigned char var_12 = (unsigned char)0;
short var_13 = (short)-288;
unsigned long long int var_16 = 6697630850514112422ULL;
signed char var_17 = (signed char)89;
signed char var_18 = (signed char)-104;
int zero = 0;
long long int var_19 = 5444440929671755270LL;
unsigned short var_20 = (unsigned short)17595;
long long int var_21 = 6076134060620478660LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
