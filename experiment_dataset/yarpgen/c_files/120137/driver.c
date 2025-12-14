#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)14122;
unsigned short var_6 = (unsigned short)61947;
unsigned long long int var_7 = 1430135008347872059ULL;
int zero = 0;
unsigned long long int var_10 = 2320440820710207890ULL;
unsigned long long int var_11 = 15573233942855874778ULL;
unsigned short var_12 = (unsigned short)19086;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
