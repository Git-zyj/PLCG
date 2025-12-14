#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-69;
unsigned char var_2 = (unsigned char)104;
unsigned char var_3 = (unsigned char)96;
int var_4 = -2076953838;
unsigned short var_5 = (unsigned short)27578;
signed char var_7 = (signed char)-42;
unsigned int var_8 = 3685931140U;
unsigned int var_9 = 2200583149U;
int zero = 0;
long long int var_10 = -5270192797958041681LL;
int var_11 = -1572258540;
unsigned int var_12 = 1403818831U;
unsigned short var_13 = (unsigned short)48723;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
