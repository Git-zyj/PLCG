#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)116;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 18027831396930431243ULL;
unsigned char var_5 = (unsigned char)198;
int var_9 = 223434030;
long long int var_10 = 1163165981846820104LL;
int zero = 0;
long long int var_13 = 8869991298790686811LL;
short var_14 = (short)15771;
unsigned char var_15 = (unsigned char)159;
int var_16 = 348874922;
int var_17 = -1631273613;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
