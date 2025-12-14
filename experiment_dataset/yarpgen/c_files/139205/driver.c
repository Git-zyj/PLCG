#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -165413129;
int var_1 = -447329949;
int var_2 = 1215293120;
unsigned long long int var_3 = 11947201705040823542ULL;
int var_6 = -1405401222;
long long int var_7 = 4514323216129081235LL;
long long int var_8 = -8687314208610689127LL;
unsigned long long int var_9 = 8743611816273470011ULL;
unsigned long long int var_10 = 18369236548139324074ULL;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 313041496U;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)55730;
unsigned short var_16 = (unsigned short)23257;
unsigned long long int var_17 = 11292177946708673060ULL;
long long int var_18 = -7142409337206821146LL;
_Bool var_19 = (_Bool)1;
int zero = 0;
long long int var_20 = -1323848523479260985LL;
_Bool var_21 = (_Bool)0;
int var_22 = -1130473939;
unsigned int var_23 = 3086575901U;
void init() {
}

void checksum() {
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
