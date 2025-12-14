#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)37;
unsigned char var_3 = (unsigned char)210;
_Bool var_5 = (_Bool)1;
_Bool var_9 = (_Bool)0;
_Bool var_12 = (_Bool)1;
int zero = 0;
short var_13 = (short)-16724;
unsigned long long int var_14 = 14141916868924638950ULL;
signed char var_15 = (signed char)18;
unsigned long long int var_16 = 18095127356564908130ULL;
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
