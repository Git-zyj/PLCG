#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-71;
unsigned short var_6 = (unsigned short)64737;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)199;
int zero = 0;
long long int var_17 = 4221769353418155601LL;
short var_18 = (short)22892;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
