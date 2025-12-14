#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)164;
unsigned int var_2 = 788418281U;
unsigned long long int var_3 = 6681690883091717548ULL;
unsigned long long int var_4 = 11563900096992037105ULL;
unsigned long long int var_6 = 4992099424342497943ULL;
short var_7 = (short)22580;
int var_11 = -361203996;
int var_12 = -731229325;
unsigned long long int var_13 = 6197709429034858128ULL;
unsigned int var_14 = 2106416540U;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned long long int var_16 = 7772641400936093731ULL;
unsigned long long int var_17 = 7507153164110468247ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
