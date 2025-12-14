#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17489056479187116845ULL;
unsigned char var_3 = (unsigned char)199;
unsigned long long int var_4 = 4776021863605967011ULL;
unsigned short var_6 = (unsigned short)4494;
unsigned short var_7 = (unsigned short)60006;
unsigned long long int var_9 = 10019044023640343174ULL;
int zero = 0;
unsigned long long int var_15 = 7533866784197111963ULL;
unsigned short var_16 = (unsigned short)44530;
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
