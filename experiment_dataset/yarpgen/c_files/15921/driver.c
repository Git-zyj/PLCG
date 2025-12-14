#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2541065773908453600ULL;
long long int var_1 = -7319028125979071375LL;
unsigned long long int var_3 = 6028410048847133887ULL;
unsigned short var_5 = (unsigned short)2048;
long long int var_6 = -4503556087096285110LL;
unsigned int var_7 = 4051069394U;
unsigned char var_8 = (unsigned char)73;
unsigned char var_11 = (unsigned char)171;
int zero = 0;
signed char var_14 = (signed char)119;
int var_15 = -2112794866;
signed char var_16 = (signed char)-15;
unsigned int var_17 = 2869913226U;
unsigned char var_18 = (unsigned char)157;
unsigned int var_19 = 2571339768U;
int var_20 = -1821626635;
int var_21 = 602216539;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
