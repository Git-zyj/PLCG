#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7488307346781719799ULL;
unsigned char var_1 = (unsigned char)173;
long long int var_3 = -1609343692097310204LL;
unsigned short var_5 = (unsigned short)27913;
int var_8 = -1321713789;
unsigned long long int var_9 = 5391837711960261195ULL;
unsigned long long int var_10 = 6856596663828736204ULL;
int zero = 0;
unsigned long long int var_11 = 13653992811127440993ULL;
int var_12 = 1417680094;
unsigned long long int var_13 = 9951285228174210703ULL;
unsigned long long int var_14 = 13455902312271017027ULL;
unsigned long long int var_15 = 4375286577377350917ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
