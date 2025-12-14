#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 729977801445740516ULL;
short var_2 = (short)7017;
_Bool var_5 = (_Bool)1;
long long int var_7 = -5932562814443591219LL;
unsigned long long int var_13 = 13621093827034564737ULL;
unsigned char var_15 = (unsigned char)202;
int zero = 0;
unsigned long long int var_16 = 11650929395787420270ULL;
short var_17 = (short)5334;
unsigned long long int var_18 = 13459479483215752065ULL;
signed char var_19 = (signed char)60;
signed char var_20 = (signed char)120;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
