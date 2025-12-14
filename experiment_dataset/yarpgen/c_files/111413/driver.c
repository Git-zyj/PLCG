#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7784350885575661456LL;
int var_2 = 1245271681;
short var_3 = (short)-9970;
int var_5 = 450882990;
int var_8 = -1710987596;
unsigned short var_9 = (unsigned short)57605;
int var_11 = 122862011;
signed char var_13 = (signed char)104;
int zero = 0;
signed char var_14 = (signed char)-106;
_Bool var_15 = (_Bool)0;
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
