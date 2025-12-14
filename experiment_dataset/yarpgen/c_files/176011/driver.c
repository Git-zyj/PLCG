#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)57987;
short var_5 = (short)-2094;
long long int var_6 = 6203111170737367085LL;
signed char var_7 = (signed char)123;
signed char var_9 = (signed char)-37;
unsigned char var_11 = (unsigned char)130;
signed char var_14 = (signed char)-9;
int zero = 0;
_Bool var_15 = (_Bool)0;
int var_16 = 912879468;
signed char var_17 = (signed char)-18;
void init() {
}

void checksum() {
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
