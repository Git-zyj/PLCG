#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13686;
long long int var_1 = -2051586990914395524LL;
unsigned short var_3 = (unsigned short)29158;
unsigned long long int var_6 = 14424891270129578885ULL;
int var_7 = 898463172;
unsigned long long int var_9 = 18366027090575609550ULL;
int zero = 0;
int var_11 = -452536516;
unsigned short var_12 = (unsigned short)53507;
unsigned long long int var_13 = 14305455049886643783ULL;
unsigned char var_14 = (unsigned char)250;
unsigned long long int var_15 = 2074053466683184081ULL;
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
