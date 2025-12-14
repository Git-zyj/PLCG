#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)220;
unsigned int var_2 = 2921114954U;
int var_4 = -435992228;
long long int var_7 = 681778503623350699LL;
long long int var_8 = -3445290650125629629LL;
unsigned short var_11 = (unsigned short)38298;
int var_15 = -298287815;
int zero = 0;
unsigned short var_17 = (unsigned short)45926;
long long int var_18 = -1923088381191603371LL;
void init() {
}

void checksum() {
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
