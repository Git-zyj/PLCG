#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)6;
unsigned char var_3 = (unsigned char)4;
short var_4 = (short)11404;
unsigned int var_5 = 3764554434U;
unsigned char var_10 = (unsigned char)59;
unsigned long long int var_13 = 5305690193826473884ULL;
unsigned int var_14 = 2902194439U;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned long long int var_16 = 4398142623643212023ULL;
signed char var_17 = (signed char)-28;
short var_18 = (short)29825;
void init() {
}

void checksum() {
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
