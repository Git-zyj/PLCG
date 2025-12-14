#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)109;
signed char var_3 = (signed char)-4;
unsigned long long int var_5 = 7795501020289293263ULL;
unsigned short var_6 = (unsigned short)47719;
short var_8 = (short)19834;
unsigned char var_9 = (unsigned char)5;
int zero = 0;
long long int var_15 = -7358354832623701225LL;
unsigned long long int var_16 = 2965503505713298487ULL;
unsigned char var_17 = (unsigned char)252;
int var_18 = 57132860;
long long int var_19 = -7515373293436002075LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
