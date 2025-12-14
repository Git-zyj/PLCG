#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)40473;
unsigned char var_3 = (unsigned char)4;
unsigned int var_4 = 1547139083U;
int var_5 = -644269539;
unsigned long long int var_6 = 6033136998778708839ULL;
unsigned int var_7 = 1802981860U;
long long int var_9 = -75530798808535771LL;
unsigned char var_10 = (unsigned char)187;
unsigned int var_12 = 660451335U;
int zero = 0;
int var_13 = -1887079824;
unsigned int var_14 = 1812718191U;
unsigned long long int var_15 = 11710500610287603913ULL;
unsigned char var_16 = (unsigned char)40;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
