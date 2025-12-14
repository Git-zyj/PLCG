#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-16612;
unsigned short var_3 = (unsigned short)63698;
long long int var_8 = -1352694102252921607LL;
int var_9 = 478594172;
long long int var_10 = -8762925444437932015LL;
int zero = 0;
unsigned char var_12 = (unsigned char)135;
unsigned char var_13 = (unsigned char)123;
unsigned short var_14 = (unsigned short)10541;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
