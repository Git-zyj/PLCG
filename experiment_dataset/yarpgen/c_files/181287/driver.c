#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-125;
unsigned int var_9 = 22499689U;
unsigned int var_10 = 3402767069U;
signed char var_11 = (signed char)-73;
unsigned short var_12 = (unsigned short)1694;
long long int var_13 = 8593280135024926670LL;
int zero = 0;
short var_15 = (short)-17776;
unsigned int var_16 = 1733225148U;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 9412962554792494746ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
