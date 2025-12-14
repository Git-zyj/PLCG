#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)180;
unsigned short var_7 = (unsigned short)8374;
int var_8 = -1672520647;
long long int var_9 = 29155572266834920LL;
unsigned short var_11 = (unsigned short)14456;
unsigned short var_13 = (unsigned short)47345;
int zero = 0;
signed char var_14 = (signed char)-116;
int var_15 = -1989659601;
unsigned short var_16 = (unsigned short)16411;
unsigned short var_17 = (unsigned short)4544;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
