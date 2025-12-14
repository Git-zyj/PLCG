#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1780700897U;
unsigned short var_6 = (unsigned short)25531;
short var_8 = (short)8879;
unsigned int var_9 = 1181149362U;
short var_10 = (short)28666;
int var_12 = -1762776218;
long long int var_15 = -2729558266426783668LL;
int zero = 0;
unsigned short var_19 = (unsigned short)26076;
unsigned int var_20 = 3501871824U;
void init() {
}

void checksum() {
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
