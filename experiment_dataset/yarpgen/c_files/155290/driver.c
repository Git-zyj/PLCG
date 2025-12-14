#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6217638060183139388ULL;
unsigned short var_2 = (unsigned short)54310;
int var_4 = 274268975;
signed char var_5 = (signed char)-74;
unsigned long long int var_6 = 10149712864918370921ULL;
signed char var_7 = (signed char)-2;
signed char var_8 = (signed char)-81;
signed char var_10 = (signed char)1;
int zero = 0;
long long int var_11 = 993104679979180388LL;
short var_12 = (short)20078;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
