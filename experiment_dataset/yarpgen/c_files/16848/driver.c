#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_2 = 4285218050370004494ULL;
unsigned long long int var_3 = 16408582796582344106ULL;
short var_4 = (short)11813;
signed char var_5 = (signed char)88;
long long int var_7 = -5493131937601892874LL;
short var_8 = (short)-23104;
long long int var_10 = 4448687546144771911LL;
short var_14 = (short)-27926;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)60036;
void init() {
}

void checksum() {
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
