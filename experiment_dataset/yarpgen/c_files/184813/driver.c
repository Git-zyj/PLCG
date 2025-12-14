#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 872339768U;
short var_1 = (short)16342;
long long int var_4 = 3421512217687732416LL;
unsigned char var_6 = (unsigned char)120;
unsigned int var_7 = 946252609U;
unsigned char var_8 = (unsigned char)61;
unsigned long long int var_9 = 5022363398919862676ULL;
unsigned char var_11 = (unsigned char)73;
unsigned long long int var_13 = 3432938179789968151ULL;
unsigned int var_14 = 886533695U;
int zero = 0;
unsigned char var_15 = (unsigned char)29;
signed char var_16 = (signed char)-33;
unsigned short var_17 = (unsigned short)11490;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
