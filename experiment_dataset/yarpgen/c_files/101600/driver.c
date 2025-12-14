#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)20;
int var_2 = 1348260430;
unsigned char var_3 = (unsigned char)212;
unsigned char var_4 = (unsigned char)223;
unsigned int var_5 = 1991706755U;
unsigned char var_6 = (unsigned char)205;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 3591419169U;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)65479;
long long int var_12 = 673137366608916158LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
