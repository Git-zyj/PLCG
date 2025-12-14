#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1627487196939752331LL;
unsigned short var_2 = (unsigned short)53898;
short var_3 = (short)-22238;
unsigned long long int var_7 = 7419665744128252849ULL;
unsigned long long int var_9 = 8984168261143700091ULL;
unsigned char var_10 = (unsigned char)148;
int zero = 0;
signed char var_13 = (signed char)-94;
long long int var_14 = -5543127219644736269LL;
unsigned int var_15 = 593602007U;
unsigned long long int var_16 = 11463904734815784232ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
