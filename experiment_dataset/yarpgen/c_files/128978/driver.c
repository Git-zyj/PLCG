#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)2;
unsigned char var_4 = (unsigned char)57;
long long int var_5 = -1379784509927863522LL;
short var_6 = (short)-24426;
_Bool var_7 = (_Bool)0;
int var_8 = 1987500205;
int var_10 = -425193607;
int var_15 = -1308391486;
_Bool var_16 = (_Bool)0;
int zero = 0;
int var_17 = -1940873281;
unsigned long long int var_18 = 3580757849961618365ULL;
unsigned short var_19 = (unsigned short)53422;
unsigned char var_20 = (unsigned char)104;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
