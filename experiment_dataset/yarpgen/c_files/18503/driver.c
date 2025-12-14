#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)43;
unsigned char var_3 = (unsigned char)15;
unsigned long long int var_6 = 3551461747224299377ULL;
_Bool var_9 = (_Bool)0;
int var_10 = 776223200;
int var_12 = -1395146694;
short var_13 = (short)10872;
unsigned long long int var_14 = 6719116553092962693ULL;
signed char var_15 = (signed char)7;
int zero = 0;
unsigned char var_18 = (unsigned char)157;
unsigned char var_19 = (unsigned char)76;
void init() {
}

void checksum() {
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
