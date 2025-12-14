#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)44517;
unsigned long long int var_2 = 4052896320240255533ULL;
long long int var_5 = 3079084626701577540LL;
signed char var_6 = (signed char)110;
unsigned char var_7 = (unsigned char)35;
unsigned int var_8 = 834130752U;
int var_9 = 2077831502;
int zero = 0;
_Bool var_10 = (_Bool)1;
short var_11 = (short)-26972;
signed char var_12 = (signed char)-111;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
