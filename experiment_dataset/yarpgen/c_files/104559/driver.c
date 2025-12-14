#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 618981759312815884ULL;
unsigned char var_1 = (unsigned char)35;
unsigned long long int var_7 = 4576330483017637398ULL;
long long int var_10 = -7621926553325740524LL;
unsigned short var_15 = (unsigned short)7838;
unsigned char var_17 = (unsigned char)120;
int zero = 0;
long long int var_20 = -4966739566232453357LL;
unsigned int var_21 = 1784305071U;
void init() {
}

void checksum() {
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
