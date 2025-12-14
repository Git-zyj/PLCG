#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_4 = 2562205094373062554ULL;
short var_6 = (short)-1259;
_Bool var_7 = (_Bool)0;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)-79;
signed char var_11 = (signed char)-127;
short var_12 = (short)-26282;
unsigned char var_13 = (unsigned char)116;
int zero = 0;
int var_14 = 649671633;
int var_15 = -1780511169;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
