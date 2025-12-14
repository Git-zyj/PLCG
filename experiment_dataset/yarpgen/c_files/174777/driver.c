#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59406;
long long int var_2 = -3639519429774100836LL;
unsigned char var_4 = (unsigned char)37;
unsigned short var_6 = (unsigned short)11091;
long long int var_8 = 5494130787760381168LL;
unsigned char var_9 = (unsigned char)223;
unsigned short var_10 = (unsigned short)39767;
unsigned long long int var_12 = 15453426829365213220ULL;
short var_13 = (short)-11052;
int var_14 = -4884310;
int zero = 0;
int var_17 = -976116522;
long long int var_18 = 7520507377319238550LL;
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
