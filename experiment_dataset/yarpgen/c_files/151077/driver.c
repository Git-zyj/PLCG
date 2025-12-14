#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)23300;
signed char var_5 = (signed char)103;
_Bool var_8 = (_Bool)0;
int var_9 = 635282516;
unsigned long long int var_11 = 9849674583883061754ULL;
unsigned int var_13 = 2601288594U;
int zero = 0;
unsigned long long int var_15 = 14629289615092875560ULL;
unsigned int var_16 = 1615791800U;
unsigned int var_17 = 4200944883U;
long long int var_18 = -7588946131362064050LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
