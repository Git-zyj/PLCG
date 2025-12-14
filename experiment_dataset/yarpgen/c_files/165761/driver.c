#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4409711992932848040LL;
unsigned int var_3 = 349842526U;
long long int var_5 = -7192299942708935694LL;
short var_6 = (short)12736;
unsigned long long int var_7 = 15092046266997394453ULL;
long long int var_8 = 5294158975854293111LL;
int var_9 = -1580117079;
unsigned char var_10 = (unsigned char)97;
unsigned long long int var_11 = 8206684700691676701ULL;
unsigned long long int var_12 = 5347747169063709439ULL;
int zero = 0;
short var_15 = (short)-31311;
unsigned char var_16 = (unsigned char)21;
unsigned short var_17 = (unsigned short)53150;
int var_18 = -1226798953;
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
