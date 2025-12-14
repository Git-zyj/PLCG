#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)102;
unsigned long long int var_9 = 9212294013712413201ULL;
_Bool var_10 = (_Bool)0;
long long int var_13 = -550518837316716912LL;
int zero = 0;
unsigned int var_19 = 3339204180U;
short var_20 = (short)-26115;
unsigned short var_21 = (unsigned short)3241;
unsigned char var_22 = (unsigned char)4;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
