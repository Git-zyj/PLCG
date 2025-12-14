#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)32;
short var_2 = (short)29363;
_Bool var_4 = (_Bool)1;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)-86;
unsigned short var_11 = (unsigned short)28859;
unsigned long long int var_12 = 17129180268692400993ULL;
int zero = 0;
_Bool var_13 = (_Bool)1;
int var_14 = -1517079613;
int var_15 = -1581288217;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
