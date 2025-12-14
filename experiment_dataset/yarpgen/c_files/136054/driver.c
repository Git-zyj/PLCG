#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3224399263U;
signed char var_2 = (signed char)-9;
signed char var_3 = (signed char)53;
unsigned char var_4 = (unsigned char)50;
signed char var_6 = (signed char)-68;
_Bool var_8 = (_Bool)1;
unsigned int var_11 = 3436086504U;
int var_12 = 325021298;
short var_13 = (short)12373;
unsigned int var_15 = 4160882883U;
int zero = 0;
unsigned int var_16 = 10259689U;
unsigned int var_17 = 2048877982U;
unsigned long long int var_18 = 6756802151880650164ULL;
unsigned short var_19 = (unsigned short)64591;
int var_20 = 1831992511;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
