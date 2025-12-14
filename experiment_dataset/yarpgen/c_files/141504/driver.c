#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)750;
_Bool var_2 = (_Bool)1;
unsigned long long int var_7 = 7782645275974216347ULL;
unsigned char var_9 = (unsigned char)251;
int var_11 = -1360329662;
int zero = 0;
_Bool var_15 = (_Bool)1;
long long int var_16 = 4933749227728487051LL;
unsigned short var_17 = (unsigned short)6838;
int var_18 = 257135726;
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
