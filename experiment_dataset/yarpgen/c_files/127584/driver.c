#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)5785;
unsigned char var_8 = (unsigned char)101;
long long int var_9 = -8237428969060277968LL;
unsigned short var_11 = (unsigned short)16133;
int zero = 0;
long long int var_12 = -2467061020278155147LL;
long long int var_13 = -4079163867966766705LL;
unsigned long long int var_14 = 15525381229944058154ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
