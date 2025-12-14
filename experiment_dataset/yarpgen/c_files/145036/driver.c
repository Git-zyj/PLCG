#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)20462;
unsigned char var_6 = (unsigned char)193;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)-28;
_Bool var_10 = (_Bool)0;
long long int var_12 = -7655698400407996310LL;
unsigned short var_13 = (unsigned short)46040;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)13473;
unsigned char var_18 = (unsigned char)241;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
