#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25377;
long long int var_1 = -2424169205368937908LL;
unsigned short var_3 = (unsigned short)53254;
short var_9 = (short)-23216;
unsigned char var_13 = (unsigned char)175;
long long int var_17 = -2939593565717342528LL;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned long long int var_20 = 12660636677425925221ULL;
signed char var_21 = (signed char)95;
unsigned char var_22 = (unsigned char)164;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
