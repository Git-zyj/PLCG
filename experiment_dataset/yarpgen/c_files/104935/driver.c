#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-58;
long long int var_1 = -4063541871149095902LL;
int var_5 = 62849120;
_Bool var_6 = (_Bool)0;
unsigned int var_12 = 3006124051U;
int zero = 0;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)98;
long long int var_15 = -5777036664575594300LL;
unsigned long long int var_16 = 16809407135361336664ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
