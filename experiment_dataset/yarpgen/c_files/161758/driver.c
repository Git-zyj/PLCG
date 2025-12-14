#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)6572;
signed char var_3 = (signed char)-96;
unsigned int var_4 = 3915327333U;
int var_9 = 514936204;
unsigned int var_10 = 2617507790U;
unsigned char var_11 = (unsigned char)197;
int var_13 = 458056737;
unsigned short var_16 = (unsigned short)13566;
unsigned int var_17 = 496236244U;
signed char var_18 = (signed char)52;
signed char var_19 = (signed char)70;
int zero = 0;
long long int var_20 = 7699802018966336550LL;
unsigned short var_21 = (unsigned short)58352;
unsigned int var_22 = 497584412U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
