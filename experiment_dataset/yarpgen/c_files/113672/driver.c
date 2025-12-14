#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)16;
short var_6 = (short)4403;
unsigned short var_9 = (unsigned short)58086;
long long int var_14 = -4578237582062642286LL;
int var_17 = 247455155;
unsigned char var_19 = (unsigned char)183;
int zero = 0;
unsigned char var_20 = (unsigned char)179;
long long int var_21 = -7216703123443881644LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
