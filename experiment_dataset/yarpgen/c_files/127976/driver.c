#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)1;
long long int var_8 = -5424649601049929093LL;
long long int var_9 = -1396460747967557996LL;
unsigned int var_11 = 451207723U;
long long int var_15 = 92719080557400090LL;
int zero = 0;
short var_18 = (short)-15082;
int var_19 = -1526676951;
unsigned char var_20 = (unsigned char)176;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
