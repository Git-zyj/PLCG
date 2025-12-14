#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24556;
signed char var_5 = (signed char)-33;
int var_6 = 1136138017;
unsigned short var_10 = (unsigned short)28385;
long long int var_14 = -8804400126214378448LL;
long long int var_15 = -3149667921978318420LL;
unsigned short var_16 = (unsigned short)9164;
int zero = 0;
unsigned short var_18 = (unsigned short)5392;
unsigned char var_19 = (unsigned char)80;
long long int var_20 = 6342494708775312369LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
