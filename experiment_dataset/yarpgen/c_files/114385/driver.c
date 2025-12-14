#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1992386720;
unsigned char var_5 = (unsigned char)75;
unsigned short var_6 = (unsigned short)13619;
long long int var_10 = -4724047028364630393LL;
_Bool var_12 = (_Bool)0;
long long int var_13 = 8220215883933845015LL;
unsigned int var_14 = 4165179847U;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)17;
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
