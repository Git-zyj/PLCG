#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9147;
unsigned long long int var_2 = 13049681170004701313ULL;
unsigned short var_3 = (unsigned short)26459;
short var_4 = (short)895;
unsigned int var_5 = 1444781870U;
unsigned int var_8 = 1397484642U;
long long int var_9 = -1385484043514484824LL;
unsigned short var_10 = (unsigned short)9858;
int zero = 0;
short var_11 = (short)8417;
unsigned char var_12 = (unsigned char)150;
signed char var_13 = (signed char)19;
unsigned char var_14 = (unsigned char)225;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
