#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1290854376U;
unsigned long long int var_1 = 18147042215423660555ULL;
unsigned int var_2 = 1888491861U;
unsigned short var_3 = (unsigned short)46604;
_Bool var_5 = (_Bool)0;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 11052063953652653216ULL;
short var_10 = (short)-28562;
_Bool var_12 = (_Bool)1;
unsigned int var_15 = 894284858U;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)19407;
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
