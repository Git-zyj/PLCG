#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1797854419;
short var_3 = (short)-8647;
unsigned short var_7 = (unsigned short)64372;
_Bool var_9 = (_Bool)1;
short var_13 = (short)3781;
unsigned int var_16 = 3021816751U;
int zero = 0;
unsigned long long int var_17 = 10914398016430390955ULL;
unsigned long long int var_18 = 13058398725168854625ULL;
unsigned short var_19 = (unsigned short)58374;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
