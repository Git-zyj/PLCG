#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5085849872367984276LL;
unsigned int var_1 = 667356381U;
long long int var_6 = 8436236432026802512LL;
long long int var_7 = 6844371366529216566LL;
long long int var_8 = -3628178575753257976LL;
unsigned short var_9 = (unsigned short)59857;
int zero = 0;
unsigned char var_12 = (unsigned char)138;
unsigned short var_13 = (unsigned short)45617;
unsigned char var_14 = (unsigned char)37;
unsigned char var_15 = (unsigned char)158;
long long int var_16 = -4626750547125945160LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
