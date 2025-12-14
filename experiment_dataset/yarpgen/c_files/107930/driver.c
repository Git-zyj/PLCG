#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)103;
_Bool var_4 = (_Bool)0;
int var_6 = -1824738909;
short var_7 = (short)25060;
unsigned long long int var_8 = 2217409701909393082ULL;
unsigned short var_9 = (unsigned short)42289;
short var_11 = (short)31051;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)24;
unsigned long long int var_14 = 12331765359454381586ULL;
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
