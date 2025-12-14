#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)58514;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)116;
unsigned char var_10 = (unsigned char)197;
int zero = 0;
signed char var_17 = (signed char)-52;
int var_18 = 955690937;
short var_19 = (short)6394;
int var_20 = 444447312;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
