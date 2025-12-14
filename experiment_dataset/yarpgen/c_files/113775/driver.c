#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-77;
_Bool var_1 = (_Bool)0;
short var_2 = (short)-23272;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)196;
signed char var_7 = (signed char)0;
unsigned int var_8 = 1613471400U;
unsigned int var_9 = 2902052864U;
unsigned char var_10 = (unsigned char)72;
_Bool var_11 = (_Bool)0;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned short var_17 = (unsigned short)23590;
unsigned char var_18 = (unsigned char)18;
long long int var_19 = 1288151528674821057LL;
unsigned long long int var_20 = 10989449770799881540ULL;
void init() {
}

void checksum() {
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
