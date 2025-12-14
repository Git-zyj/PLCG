#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1888041698;
unsigned char var_4 = (unsigned char)45;
unsigned int var_15 = 1456416190U;
unsigned int var_17 = 1856602016U;
int zero = 0;
unsigned long long int var_18 = 7973723221585443711ULL;
unsigned long long int var_19 = 17215787741523347792ULL;
unsigned short var_20 = (unsigned short)43102;
unsigned int var_21 = 2664014309U;
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
