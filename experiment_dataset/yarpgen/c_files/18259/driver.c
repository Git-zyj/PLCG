#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 624183917173281336ULL;
unsigned short var_4 = (unsigned short)61631;
long long int var_5 = -9009441684877325427LL;
short var_7 = (short)7292;
unsigned short var_9 = (unsigned short)28701;
unsigned short var_11 = (unsigned short)33158;
int zero = 0;
unsigned short var_12 = (unsigned short)52190;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
