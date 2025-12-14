#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)183;
long long int var_9 = 5746437118766666431LL;
unsigned char var_13 = (unsigned char)193;
unsigned char var_14 = (unsigned char)191;
signed char var_17 = (signed char)78;
int zero = 0;
unsigned char var_19 = (unsigned char)36;
unsigned short var_20 = (unsigned short)5485;
unsigned long long int var_21 = 8687195802683452179ULL;
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
