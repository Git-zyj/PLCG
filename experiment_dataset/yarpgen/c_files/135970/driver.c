#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2434778380U;
signed char var_7 = (signed char)-115;
long long int var_9 = 8028512767900718090LL;
unsigned long long int var_11 = 14706844855693287460ULL;
signed char var_13 = (signed char)-9;
unsigned char var_14 = (unsigned char)128;
int var_18 = -250367120;
int zero = 0;
signed char var_19 = (signed char)51;
signed char var_20 = (signed char)66;
signed char var_21 = (signed char)-77;
unsigned long long int var_22 = 15677912772615839216ULL;
void init() {
}

void checksum() {
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
