#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)111;
short var_5 = (short)18381;
unsigned long long int var_7 = 17970425631618348397ULL;
unsigned int var_10 = 1314061026U;
long long int var_11 = 5413342111821271565LL;
signed char var_12 = (signed char)119;
signed char var_13 = (signed char)4;
unsigned short var_14 = (unsigned short)43093;
unsigned short var_17 = (unsigned short)30744;
int zero = 0;
short var_19 = (short)16179;
unsigned short var_20 = (unsigned short)52474;
int var_21 = -1865740055;
_Bool var_22 = (_Bool)0;
int var_23 = -210542768;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
