#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 298379686827966452ULL;
unsigned char var_1 = (unsigned char)75;
_Bool var_4 = (_Bool)1;
unsigned char var_11 = (unsigned char)240;
unsigned int var_12 = 3179759095U;
short var_13 = (short)26212;
signed char var_14 = (signed char)-101;
int zero = 0;
unsigned char var_15 = (unsigned char)0;
signed char var_16 = (signed char)57;
signed char var_17 = (signed char)79;
unsigned short var_18 = (unsigned short)53189;
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
