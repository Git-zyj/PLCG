#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 4101088914U;
unsigned int var_3 = 1960054861U;
unsigned long long int var_5 = 6378337804779737810ULL;
unsigned int var_7 = 864156935U;
short var_8 = (short)16417;
short var_9 = (short)-29129;
int zero = 0;
unsigned char var_10 = (unsigned char)253;
unsigned long long int var_11 = 6996043250716250941ULL;
unsigned int var_12 = 4204328671U;
unsigned char var_13 = (unsigned char)208;
short var_14 = (short)-12578;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
