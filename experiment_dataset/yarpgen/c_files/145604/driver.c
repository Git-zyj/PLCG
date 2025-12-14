#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27457;
unsigned short var_3 = (unsigned short)64910;
_Bool var_5 = (_Bool)0;
unsigned char var_7 = (unsigned char)208;
signed char var_8 = (signed char)97;
short var_10 = (short)-30054;
long long int var_12 = -2642353975579412643LL;
int zero = 0;
short var_14 = (short)-24487;
unsigned short var_15 = (unsigned short)41051;
int var_16 = -2057214146;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
