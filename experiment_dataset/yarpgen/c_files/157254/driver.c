#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)79;
short var_4 = (short)-10961;
_Bool var_10 = (_Bool)1;
unsigned short var_17 = (unsigned short)2845;
int zero = 0;
long long int var_18 = -8307129156843090300LL;
unsigned short var_19 = (unsigned short)38523;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
