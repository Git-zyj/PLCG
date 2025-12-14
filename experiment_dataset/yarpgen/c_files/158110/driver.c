#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1197978515388452433LL;
unsigned long long int var_1 = 12731984522283277604ULL;
unsigned short var_3 = (unsigned short)46632;
short var_4 = (short)-7397;
long long int var_5 = -297885383890857237LL;
short var_6 = (short)-2364;
unsigned char var_9 = (unsigned char)65;
int zero = 0;
unsigned long long int var_11 = 12700231690479528925ULL;
long long int var_12 = -3861808251021375636LL;
unsigned long long int var_13 = 14360336789431325485ULL;
void init() {
}

void checksum() {
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
