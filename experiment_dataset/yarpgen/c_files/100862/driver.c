#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)41989;
short var_2 = (short)-22326;
unsigned long long int var_3 = 33065153844061603ULL;
_Bool var_5 = (_Bool)1;
int var_6 = 665316558;
int var_9 = -2119405549;
unsigned int var_10 = 3159022019U;
int var_13 = 1804628425;
int var_14 = 669812128;
int zero = 0;
int var_16 = 1701096464;
int var_17 = 2071121862;
signed char var_18 = (signed char)-110;
void init() {
}

void checksum() {
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
