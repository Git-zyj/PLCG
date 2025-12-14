#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-105;
unsigned int var_2 = 865832325U;
int var_3 = 711409930;
int var_4 = -140422812;
unsigned char var_5 = (unsigned char)5;
unsigned int var_6 = 1365097001U;
unsigned long long int var_9 = 903983889905195058ULL;
unsigned char var_10 = (unsigned char)152;
unsigned char var_13 = (unsigned char)243;
signed char var_14 = (signed char)-114;
signed char var_16 = (signed char)-103;
int zero = 0;
int var_18 = -1221061461;
long long int var_19 = -227869624636634289LL;
int var_20 = 741801816;
void init() {
}

void checksum() {
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
