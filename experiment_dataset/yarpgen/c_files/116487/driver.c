#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8786691142838563416ULL;
signed char var_3 = (signed char)-44;
long long int var_4 = 1322059201452842513LL;
int var_6 = 722425675;
unsigned char var_9 = (unsigned char)220;
_Bool var_11 = (_Bool)1;
unsigned char var_13 = (unsigned char)84;
unsigned short var_14 = (unsigned short)23796;
int zero = 0;
int var_17 = 115068325;
unsigned char var_18 = (unsigned char)47;
void init() {
}

void checksum() {
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
