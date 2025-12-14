#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15640537258324999821ULL;
int var_2 = -332961713;
unsigned char var_4 = (unsigned char)136;
unsigned short var_5 = (unsigned short)64076;
int var_6 = -1687817086;
signed char var_7 = (signed char)17;
unsigned short var_8 = (unsigned short)29599;
unsigned short var_9 = (unsigned short)43092;
int zero = 0;
unsigned int var_10 = 934142567U;
_Bool var_11 = (_Bool)1;
long long int var_12 = -4283254516589575259LL;
short var_13 = (short)-7362;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
