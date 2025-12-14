#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30295;
short var_2 = (short)4794;
long long int var_3 = 1211874055576902086LL;
_Bool var_4 = (_Bool)0;
short var_5 = (short)-23192;
long long int var_10 = 2695122863546856884LL;
int zero = 0;
unsigned char var_13 = (unsigned char)106;
unsigned char var_14 = (unsigned char)193;
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
