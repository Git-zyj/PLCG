#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -9109172873044588711LL;
int var_3 = 1579621753;
unsigned char var_4 = (unsigned char)156;
unsigned char var_9 = (unsigned char)76;
int var_10 = 1431132255;
unsigned short var_12 = (unsigned short)10101;
long long int var_13 = 1415015673060455214LL;
long long int var_15 = -2634516561381380255LL;
int zero = 0;
int var_18 = 236258407;
signed char var_19 = (signed char)81;
short var_20 = (short)-11293;
void init() {
}

void checksum() {
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
