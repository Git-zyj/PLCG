#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)206;
int var_3 = 1716047256;
int var_5 = -1852175493;
unsigned char var_7 = (unsigned char)157;
long long int var_8 = 3030872343338940050LL;
long long int var_11 = 8802503715721334476LL;
int zero = 0;
long long int var_19 = -25603814673460460LL;
long long int var_20 = 5782980328804884768LL;
unsigned char var_21 = (unsigned char)152;
void init() {
}

void checksum() {
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
