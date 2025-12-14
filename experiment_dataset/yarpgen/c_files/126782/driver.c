#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3128436396722457381LL;
unsigned char var_1 = (unsigned char)226;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)46;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)36;
unsigned char var_6 = (unsigned char)154;
unsigned char var_8 = (unsigned char)107;
unsigned short var_9 = (unsigned short)33453;
unsigned int var_11 = 1078703675U;
int zero = 0;
unsigned int var_12 = 4102571393U;
int var_13 = 1860513855;
unsigned char var_14 = (unsigned char)103;
unsigned int var_15 = 924037396U;
void init() {
}

void checksum() {
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
