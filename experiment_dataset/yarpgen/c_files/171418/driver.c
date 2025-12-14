#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3215715648U;
unsigned char var_6 = (unsigned char)117;
_Bool var_10 = (_Bool)0;
unsigned char var_13 = (unsigned char)140;
long long int var_15 = -4705158507633374975LL;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned short var_17 = (unsigned short)32139;
long long int var_18 = 1595933294397808802LL;
long long int var_19 = 2187068264411201651LL;
unsigned long long int var_20 = 13113085621783117679ULL;
void init() {
}

void checksum() {
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
