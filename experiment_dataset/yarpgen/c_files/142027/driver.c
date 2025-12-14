#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 833687615U;
short var_3 = (short)17507;
unsigned long long int var_4 = 12000047777166995572ULL;
unsigned long long int var_5 = 65134468083327455ULL;
unsigned short var_9 = (unsigned short)53892;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)23986;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned short var_14 = (unsigned short)1350;
unsigned long long int var_15 = 5177680971330055168ULL;
unsigned char var_16 = (unsigned char)228;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
