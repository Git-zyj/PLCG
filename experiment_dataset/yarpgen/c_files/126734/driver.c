#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)11169;
unsigned short var_2 = (unsigned short)58720;
long long int var_4 = -3864384098623367042LL;
long long int var_6 = 8818979819553442136LL;
unsigned short var_7 = (unsigned short)9515;
int var_8 = -1260356802;
int var_9 = 1011915221;
int var_11 = -1407253288;
int zero = 0;
unsigned int var_17 = 2121279050U;
unsigned char var_18 = (unsigned char)174;
short var_19 = (short)-29307;
unsigned short var_20 = (unsigned short)15430;
int var_21 = -1994320242;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
