#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)37161;
int var_3 = 1942249724;
unsigned long long int var_4 = 13657255725165865807ULL;
short var_7 = (short)-30668;
short var_13 = (short)9920;
long long int var_15 = 2569691739842061572LL;
signed char var_16 = (signed char)-41;
int zero = 0;
unsigned long long int var_19 = 6672393964740447365ULL;
unsigned long long int var_20 = 482981583565342741ULL;
void init() {
}

void checksum() {
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
