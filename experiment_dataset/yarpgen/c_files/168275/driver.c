#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2704438813U;
int var_2 = 619605399;
unsigned long long int var_3 = 17066807854169060508ULL;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 921185034U;
unsigned long long int var_8 = 10637661094521805603ULL;
unsigned char var_9 = (unsigned char)36;
unsigned short var_10 = (unsigned short)5490;
int zero = 0;
short var_11 = (short)-30874;
unsigned long long int var_12 = 4158380870002138003ULL;
long long int var_13 = 7389938902893072747LL;
unsigned char var_14 = (unsigned char)190;
signed char var_15 = (signed char)-23;
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
