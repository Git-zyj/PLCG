#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)221;
long long int var_6 = 7227595130985951570LL;
short var_15 = (short)-22112;
int zero = 0;
signed char var_16 = (signed char)-39;
int var_17 = 1445922807;
short var_18 = (short)9186;
unsigned short var_19 = (unsigned short)36513;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
