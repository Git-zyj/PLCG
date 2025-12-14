#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)18;
unsigned char var_2 = (unsigned char)253;
unsigned short var_3 = (unsigned short)19507;
int var_4 = 779364534;
long long int var_5 = -5652772635124431911LL;
int var_8 = 892704998;
unsigned int var_14 = 319116309U;
unsigned short var_17 = (unsigned short)61629;
int zero = 0;
int var_18 = 1614020841;
long long int var_19 = 566751355663731585LL;
unsigned int var_20 = 2741417685U;
long long int var_21 = 8455728229988348542LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
