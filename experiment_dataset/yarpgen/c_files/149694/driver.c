#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_7 = (unsigned short)64380;
short var_9 = (short)-18781;
signed char var_12 = (signed char)25;
unsigned char var_15 = (unsigned char)209;
int zero = 0;
unsigned int var_18 = 418490013U;
unsigned int var_19 = 1271179874U;
unsigned int var_20 = 1911350801U;
unsigned char var_21 = (unsigned char)214;
short var_22 = (short)7706;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
