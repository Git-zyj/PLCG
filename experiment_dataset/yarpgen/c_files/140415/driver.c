#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7927540356610398906LL;
unsigned char var_2 = (unsigned char)231;
unsigned short var_4 = (unsigned short)48354;
long long int var_5 = 2683841882073551338LL;
long long int var_7 = -6193975164292617058LL;
unsigned char var_9 = (unsigned char)189;
unsigned char var_14 = (unsigned char)138;
int zero = 0;
unsigned char var_15 = (unsigned char)2;
unsigned short var_16 = (unsigned short)58250;
void init() {
}

void checksum() {
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
