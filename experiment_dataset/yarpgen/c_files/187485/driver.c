#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)35;
long long int var_5 = -5866352209642868847LL;
_Bool var_6 = (_Bool)1;
unsigned short var_10 = (unsigned short)22166;
int zero = 0;
unsigned short var_18 = (unsigned short)41171;
unsigned short var_19 = (unsigned short)23907;
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
