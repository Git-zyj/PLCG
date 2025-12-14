#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1260956938;
unsigned char var_1 = (unsigned char)117;
unsigned int var_3 = 1504778691U;
int var_4 = 204197966;
unsigned short var_5 = (unsigned short)41187;
unsigned char var_9 = (unsigned char)36;
unsigned long long int var_11 = 3058175279421977215ULL;
unsigned char var_12 = (unsigned char)102;
unsigned char var_14 = (unsigned char)247;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)219;
signed char var_17 = (signed char)-115;
unsigned int var_18 = 2120246744U;
unsigned int var_19 = 250957408U;
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
