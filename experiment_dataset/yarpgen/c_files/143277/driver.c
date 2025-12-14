#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1943621325U;
short var_1 = (short)1387;
unsigned long long int var_2 = 12676960424633323029ULL;
int var_3 = 1839892177;
unsigned char var_5 = (unsigned char)135;
signed char var_6 = (signed char)13;
unsigned char var_8 = (unsigned char)225;
int var_10 = -2201646;
unsigned long long int var_11 = 3471713014006436806ULL;
long long int var_12 = -6446854169144836973LL;
int var_13 = 1924918549;
int var_14 = -1137196402;
signed char var_15 = (signed char)-82;
int zero = 0;
unsigned long long int var_16 = 14025349304324351676ULL;
int var_17 = 33337753;
unsigned char var_18 = (unsigned char)236;
unsigned char var_19 = (unsigned char)67;
unsigned long long int var_20 = 8166717242270375399ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
