#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25176;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 3903446444380900876ULL;
unsigned short var_5 = (unsigned short)1193;
unsigned char var_6 = (unsigned char)224;
_Bool var_7 = (_Bool)0;
int zero = 0;
unsigned long long int var_10 = 17341423836818599830ULL;
long long int var_11 = 7653985868461479344LL;
int var_12 = -684850010;
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
