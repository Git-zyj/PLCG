#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1988782722656806390LL;
int var_2 = 590072905;
unsigned int var_3 = 209952893U;
unsigned long long int var_5 = 11778202264105508560ULL;
long long int var_6 = 7558145813877140654LL;
unsigned char var_9 = (unsigned char)180;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)0;
int zero = 0;
signed char var_15 = (signed char)37;
short var_16 = (short)-25222;
unsigned char var_17 = (unsigned char)2;
short var_18 = (short)27050;
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
