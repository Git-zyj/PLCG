#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 199843797U;
long long int var_6 = 5074614063322503610LL;
unsigned short var_12 = (unsigned short)36823;
unsigned char var_14 = (unsigned char)208;
int zero = 0;
unsigned short var_15 = (unsigned short)37334;
long long int var_16 = 3817978733291522401LL;
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
