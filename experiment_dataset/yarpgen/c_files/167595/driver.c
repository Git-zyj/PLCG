#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)50;
unsigned char var_4 = (unsigned char)27;
unsigned int var_5 = 16243070U;
unsigned char var_6 = (unsigned char)230;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)241;
short var_12 = (short)13713;
long long int var_14 = 1289300774320511591LL;
unsigned int var_15 = 258099252U;
unsigned long long int var_16 = 5032523124273972172ULL;
int zero = 0;
unsigned long long int var_17 = 12083251757708255370ULL;
unsigned long long int var_18 = 6097805792852634236ULL;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
