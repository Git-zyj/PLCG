#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-17;
_Bool var_2 = (_Bool)0;
long long int var_4 = 8374944061912604649LL;
unsigned char var_6 = (unsigned char)70;
unsigned char var_7 = (unsigned char)140;
unsigned long long int var_10 = 16273635618068652969ULL;
short var_12 = (short)17978;
short var_13 = (short)27397;
long long int var_14 = 1406947452178380228LL;
short var_15 = (short)9487;
_Bool var_17 = (_Bool)0;
int zero = 0;
short var_18 = (short)-411;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 8421414223382944319ULL;
long long int var_21 = 1297675101038018791LL;
int var_22 = -182740416;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
