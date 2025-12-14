#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 7975034505414130355LL;
long long int var_4 = -5536428425449118368LL;
unsigned char var_7 = (unsigned char)84;
int var_9 = -526209950;
unsigned short var_10 = (unsigned short)32867;
unsigned char var_11 = (unsigned char)154;
unsigned short var_13 = (unsigned short)39250;
short var_15 = (short)17156;
int zero = 0;
int var_16 = 1109557085;
unsigned char var_17 = (unsigned char)241;
signed char var_18 = (signed char)10;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
