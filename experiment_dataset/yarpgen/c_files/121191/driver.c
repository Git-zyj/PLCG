#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7277568716191708664LL;
short var_5 = (short)-3867;
unsigned short var_6 = (unsigned short)37268;
int var_10 = -1351574488;
int var_16 = -1593688020;
short var_19 = (short)20169;
int zero = 0;
unsigned short var_20 = (unsigned short)652;
long long int var_21 = 6161247957899588893LL;
int var_22 = -1325756249;
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
