#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)12397;
unsigned long long int var_11 = 6180502697811381609ULL;
unsigned short var_12 = (unsigned short)3928;
short var_15 = (short)-10772;
long long int var_16 = 3858972280703259694LL;
int zero = 0;
unsigned long long int var_17 = 14285382518647974262ULL;
int var_18 = 653160272;
int var_19 = -1575401066;
int var_20 = 1464216494;
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
