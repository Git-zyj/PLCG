#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)140;
signed char var_3 = (signed char)93;
int var_4 = 1535016509;
unsigned short var_7 = (unsigned short)2559;
unsigned char var_9 = (unsigned char)89;
short var_10 = (short)-24909;
short var_12 = (short)1403;
int var_15 = 1070750218;
int zero = 0;
int var_18 = 976575049;
unsigned int var_19 = 1900039942U;
unsigned char var_20 = (unsigned char)147;
short var_21 = (short)8002;
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
