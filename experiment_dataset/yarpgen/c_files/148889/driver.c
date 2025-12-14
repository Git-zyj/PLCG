#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)34376;
signed char var_2 = (signed char)-20;
unsigned char var_3 = (unsigned char)76;
unsigned short var_9 = (unsigned short)20262;
long long int var_10 = 8841629258730188209LL;
signed char var_11 = (signed char)-98;
unsigned long long int var_12 = 12542150254379151851ULL;
int zero = 0;
short var_16 = (short)21762;
int var_17 = 1263757604;
int var_18 = -2120944044;
void init() {
}

void checksum() {
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
