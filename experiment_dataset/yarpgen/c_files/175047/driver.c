#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2034435727;
long long int var_1 = 8266279165371176849LL;
unsigned int var_2 = 1947047457U;
unsigned short var_3 = (unsigned short)40881;
int var_5 = -378772205;
long long int var_7 = 820838169521569825LL;
int var_8 = -2022077331;
int zero = 0;
short var_10 = (short)-24655;
unsigned long long int var_11 = 10066390895813791854ULL;
unsigned char var_12 = (unsigned char)60;
unsigned short var_13 = (unsigned short)57729;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
