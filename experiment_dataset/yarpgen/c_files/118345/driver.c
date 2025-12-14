#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63184;
unsigned short var_1 = (unsigned short)6944;
unsigned char var_3 = (unsigned char)192;
int var_4 = 950344899;
unsigned int var_9 = 3823033656U;
int var_12 = -1239081618;
_Bool var_16 = (_Bool)1;
int var_18 = -1027951750;
int zero = 0;
int var_19 = 193318680;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
