#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_3 = 5237810919589534663LL;
long long int var_6 = 2884244748071375087LL;
unsigned char var_7 = (unsigned char)165;
int zero = 0;
unsigned short var_10 = (unsigned short)20567;
short var_11 = (short)9491;
unsigned short var_12 = (unsigned short)2072;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
