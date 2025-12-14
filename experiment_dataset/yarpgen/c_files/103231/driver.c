#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -6537664639508491497LL;
signed char var_4 = (signed char)121;
signed char var_5 = (signed char)67;
unsigned long long int var_7 = 12641601629337375873ULL;
short var_8 = (short)-511;
unsigned long long int var_9 = 14323907766069772088ULL;
int zero = 0;
unsigned long long int var_10 = 6274788389908651627ULL;
signed char var_11 = (signed char)62;
long long int var_12 = 8829525080045766580LL;
short var_13 = (short)28784;
signed char var_14 = (signed char)52;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
