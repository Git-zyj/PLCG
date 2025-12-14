#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2052327405;
int var_3 = 636912976;
unsigned short var_4 = (unsigned short)47388;
int var_5 = -638331853;
signed char var_8 = (signed char)-18;
long long int var_10 = 6362054014930198151LL;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-25662;
int zero = 0;
unsigned int var_14 = 2490406025U;
signed char var_15 = (signed char)-105;
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
