#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1217456929;
long long int var_2 = -5691767779808986761LL;
unsigned short var_4 = (unsigned short)52459;
short var_5 = (short)20692;
unsigned char var_8 = (unsigned char)244;
unsigned char var_9 = (unsigned char)204;
long long int var_11 = 3580377478393327898LL;
int zero = 0;
int var_19 = -9814233;
int var_20 = -1657273371;
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
