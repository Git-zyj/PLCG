#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2079331029456976970ULL;
int var_2 = 1263574164;
short var_3 = (short)27976;
int var_4 = -1082158809;
unsigned long long int var_5 = 10599165000258421083ULL;
unsigned int var_6 = 842685407U;
short var_7 = (short)3428;
unsigned char var_8 = (unsigned char)167;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)201;
unsigned char var_13 = (unsigned char)203;
unsigned long long int var_14 = 5842907778003761971ULL;
int zero = 0;
long long int var_15 = 3122377033709263114LL;
unsigned long long int var_16 = 10883749031386631061ULL;
unsigned int var_17 = 2427051561U;
long long int var_18 = -4090992545663639858LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
