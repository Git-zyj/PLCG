#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1018988275238856458LL;
unsigned short var_5 = (unsigned short)126;
_Bool var_7 = (_Bool)0;
unsigned short var_11 = (unsigned short)7568;
int zero = 0;
unsigned short var_13 = (unsigned short)17099;
unsigned char var_14 = (unsigned char)156;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
