#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)43655;
unsigned char var_2 = (unsigned char)78;
_Bool var_6 = (_Bool)0;
int var_9 = 1158564736;
int var_14 = 1030224091;
int zero = 0;
int var_16 = -1741877335;
int var_17 = -872097463;
unsigned char var_18 = (unsigned char)133;
unsigned char var_19 = (unsigned char)67;
int var_20 = -2140283524;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
