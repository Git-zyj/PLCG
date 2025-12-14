#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)4765;
unsigned char var_15 = (unsigned char)152;
int zero = 0;
_Bool var_19 = (_Bool)0;
long long int var_20 = -3238540318395769008LL;
unsigned long long int var_21 = 11112848877553688193ULL;
unsigned short var_22 = (unsigned short)56496;
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
