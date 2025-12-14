#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4094524925U;
unsigned int var_2 = 1066758682U;
unsigned short var_5 = (unsigned short)29056;
unsigned long long int var_7 = 10751383062536816156ULL;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 1195166531U;
int zero = 0;
short var_12 = (short)29049;
signed char var_13 = (signed char)-112;
unsigned int var_14 = 4070030665U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
