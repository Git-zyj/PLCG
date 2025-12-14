#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8958759394077388624LL;
unsigned short var_7 = (unsigned short)32760;
_Bool var_15 = (_Bool)0;
long long int var_16 = 8444008156427470688LL;
signed char var_17 = (signed char)-117;
signed char var_18 = (signed char)-32;
int zero = 0;
unsigned char var_19 = (unsigned char)138;
signed char var_20 = (signed char)-48;
unsigned int var_21 = 1658096976U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
