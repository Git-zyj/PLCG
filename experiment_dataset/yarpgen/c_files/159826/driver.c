#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 4618961681689184998ULL;
unsigned char var_4 = (unsigned char)240;
long long int var_11 = -4802807279402362538LL;
short var_17 = (short)15589;
_Bool var_19 = (_Bool)1;
int zero = 0;
long long int var_20 = -4335428477893970869LL;
unsigned short var_21 = (unsigned short)16948;
long long int var_22 = -728674068156848645LL;
void init() {
}

void checksum() {
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
