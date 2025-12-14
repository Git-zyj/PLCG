#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)19814;
long long int var_3 = 5445046917755441005LL;
unsigned short var_4 = (unsigned short)44257;
short var_5 = (short)-2464;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)71;
short var_9 = (short)-29927;
unsigned short var_15 = (unsigned short)5591;
int zero = 0;
unsigned int var_16 = 3745546014U;
long long int var_17 = 6209802353869276259LL;
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
