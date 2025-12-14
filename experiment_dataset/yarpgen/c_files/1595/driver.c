#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2329878064630172051LL;
unsigned long long int var_2 = 234230707281532377ULL;
unsigned short var_3 = (unsigned short)62530;
unsigned short var_5 = (unsigned short)27531;
long long int var_7 = -3632904055182925554LL;
unsigned long long int var_8 = 2203561562233641819ULL;
unsigned short var_10 = (unsigned short)52096;
int zero = 0;
long long int var_12 = -377854381910890484LL;
signed char var_13 = (signed char)7;
unsigned long long int var_14 = 14830077571952755028ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
