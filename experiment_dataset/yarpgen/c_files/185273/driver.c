#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)82;
_Bool var_2 = (_Bool)0;
long long int var_7 = -830747677909800088LL;
unsigned short var_10 = (unsigned short)65459;
int zero = 0;
signed char var_11 = (signed char)-33;
short var_12 = (short)-22253;
int var_13 = -1221992431;
long long int var_14 = 5551219609372058356LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
