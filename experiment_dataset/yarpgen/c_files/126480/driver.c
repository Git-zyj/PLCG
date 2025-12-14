#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1589622350;
long long int var_2 = -3267536947607972305LL;
unsigned long long int var_3 = 17911741973659329864ULL;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)163;
unsigned short var_7 = (unsigned short)24117;
int zero = 0;
unsigned long long int var_10 = 6826677686911034099ULL;
unsigned int var_11 = 2997187773U;
long long int var_12 = 8681315707467529853LL;
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
