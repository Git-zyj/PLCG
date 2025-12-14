#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)35;
unsigned char var_2 = (unsigned char)106;
_Bool var_4 = (_Bool)0;
int var_7 = -1263911482;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned short var_16 = (unsigned short)47705;
signed char var_17 = (signed char)-8;
unsigned char var_18 = (unsigned char)13;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
