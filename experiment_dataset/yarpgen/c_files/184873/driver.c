#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)177;
unsigned char var_3 = (unsigned char)252;
unsigned char var_4 = (unsigned char)43;
long long int var_5 = 3978089543642159308LL;
unsigned char var_6 = (unsigned char)41;
long long int var_7 = 858232801120827634LL;
unsigned char var_8 = (unsigned char)121;
long long int var_12 = 4732485624057190332LL;
int zero = 0;
unsigned int var_13 = 3081408424U;
unsigned int var_14 = 763575372U;
unsigned short var_15 = (unsigned short)14588;
long long int var_16 = 3856345188579758221LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
