#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)572;
signed char var_3 = (signed char)-82;
unsigned char var_5 = (unsigned char)211;
unsigned long long int var_6 = 11068428218767532600ULL;
unsigned char var_7 = (unsigned char)72;
long long int var_9 = 5296942287787290104LL;
unsigned char var_11 = (unsigned char)35;
unsigned char var_12 = (unsigned char)53;
unsigned char var_14 = (unsigned char)179;
unsigned long long int var_16 = 9634825541852995538ULL;
int zero = 0;
int var_17 = 968692941;
unsigned int var_18 = 3554894704U;
unsigned long long int var_19 = 8262662339010330559ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
