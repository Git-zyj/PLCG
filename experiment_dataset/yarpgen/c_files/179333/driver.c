#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12097689782132599329ULL;
signed char var_2 = (signed char)-22;
unsigned char var_3 = (unsigned char)61;
unsigned int var_4 = 1364751331U;
unsigned long long int var_9 = 18442658600516888171ULL;
_Bool var_10 = (_Bool)1;
int var_12 = 1464221241;
_Bool var_13 = (_Bool)1;
long long int var_14 = -2998298266566302506LL;
int var_15 = -331542098;
int var_17 = -1173820197;
int zero = 0;
unsigned int var_18 = 2619605212U;
unsigned short var_19 = (unsigned short)53379;
unsigned short var_20 = (unsigned short)60403;
long long int var_21 = 6388242854607741215LL;
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
