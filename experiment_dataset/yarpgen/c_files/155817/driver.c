#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12419997938198270673ULL;
unsigned char var_2 = (unsigned char)43;
unsigned short var_3 = (unsigned short)32556;
unsigned short var_5 = (unsigned short)21901;
long long int var_8 = 3993903131846703231LL;
unsigned short var_9 = (unsigned short)51729;
unsigned short var_10 = (unsigned short)35397;
unsigned long long int var_13 = 14030789557424190264ULL;
int zero = 0;
short var_14 = (short)-25431;
signed char var_15 = (signed char)75;
void init() {
}

void checksum() {
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
