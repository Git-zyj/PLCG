#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 15402361U;
_Bool var_3 = (_Bool)1;
long long int var_5 = -5837484020851222940LL;
unsigned long long int var_7 = 12997502934166096639ULL;
int var_9 = 883122332;
int zero = 0;
_Bool var_11 = (_Bool)0;
long long int var_12 = 3259141966140816637LL;
int var_13 = -902687760;
int var_14 = 1563434879;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)-118;
short var_17 = (short)27225;
unsigned char var_18 = (unsigned char)62;
unsigned int var_19 = 1677706895U;
unsigned long long int var_20 = 13636411011883607195ULL;
short var_21 = (short)-27390;
unsigned long long int var_22 = 11605442860230202784ULL;
unsigned int var_23 = 2208793529U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
