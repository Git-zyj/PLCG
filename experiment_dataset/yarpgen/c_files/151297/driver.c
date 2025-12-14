#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)253;
int var_3 = -2027897478;
long long int var_7 = 4355849986192204682LL;
_Bool var_10 = (_Bool)1;
int zero = 0;
int var_14 = 100374395;
unsigned short var_15 = (unsigned short)62250;
short var_16 = (short)155;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
