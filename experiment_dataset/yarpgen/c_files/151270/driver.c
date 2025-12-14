#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)27;
int var_3 = 1743032582;
unsigned long long int var_6 = 6439773144861407470ULL;
unsigned long long int var_7 = 7747713128754788786ULL;
long long int var_10 = 4812697853626999143LL;
unsigned long long int var_11 = 817847207931005737ULL;
unsigned char var_14 = (unsigned char)142;
unsigned short var_15 = (unsigned short)20268;
short var_17 = (short)21101;
unsigned long long int var_18 = 2777121840374133892ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)107;
signed char var_21 = (signed char)104;
int var_22 = -1658396605;
_Bool var_23 = (_Bool)1;
_Bool var_24 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
