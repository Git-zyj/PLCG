#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)23183;
unsigned char var_1 = (unsigned char)51;
long long int var_3 = 4529258462663993683LL;
long long int var_5 = -5135495617186581015LL;
short var_7 = (short)-16002;
unsigned char var_9 = (unsigned char)109;
signed char var_10 = (signed char)64;
int var_13 = 1841468436;
int zero = 0;
int var_15 = -489092460;
unsigned long long int var_16 = 6424005551908240482ULL;
signed char var_17 = (signed char)-127;
int var_18 = -2027118865;
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
