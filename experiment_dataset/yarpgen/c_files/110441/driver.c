#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13046104602496017853ULL;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 6868340273361837237ULL;
unsigned char var_6 = (unsigned char)191;
short var_7 = (short)25854;
unsigned char var_10 = (unsigned char)153;
short var_13 = (short)-4064;
int var_17 = -497318862;
int zero = 0;
int var_18 = -934143612;
short var_19 = (short)17076;
unsigned long long int var_20 = 2181641234178367399ULL;
unsigned int var_21 = 313734807U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
