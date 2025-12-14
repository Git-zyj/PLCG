#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -913149507;
unsigned short var_1 = (unsigned short)49177;
unsigned char var_3 = (unsigned char)198;
int var_4 = 828757335;
unsigned long long int var_8 = 10864812791703540583ULL;
unsigned long long int var_9 = 5544673605366007589ULL;
unsigned short var_12 = (unsigned short)54797;
int zero = 0;
unsigned long long int var_15 = 12817684840637911138ULL;
long long int var_16 = -8034884975239690555LL;
unsigned char var_17 = (unsigned char)44;
long long int var_18 = -996907846766212513LL;
unsigned long long int var_19 = 3854298816353040757ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
