#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)72;
_Bool var_2 = (_Bool)0;
int var_3 = -1745430171;
unsigned char var_5 = (unsigned char)3;
long long int var_11 = 9030855236045640499LL;
unsigned char var_15 = (unsigned char)254;
int var_16 = 1737758046;
int zero = 0;
unsigned long long int var_17 = 12459699112725213949ULL;
signed char var_18 = (signed char)-121;
short var_19 = (short)3795;
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
