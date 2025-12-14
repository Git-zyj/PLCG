#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)0;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)17;
unsigned long long int var_6 = 16313590716263802413ULL;
signed char var_7 = (signed char)81;
signed char var_8 = (signed char)60;
unsigned short var_9 = (unsigned short)26816;
int zero = 0;
short var_10 = (short)12882;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)82;
unsigned long long int var_13 = 3418020480103307031ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
