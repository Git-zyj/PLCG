#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1966255191;
unsigned int var_4 = 3318222532U;
signed char var_5 = (signed char)48;
int var_8 = -1651688256;
long long int var_9 = 6576539150764165854LL;
unsigned char var_10 = (unsigned char)100;
signed char var_11 = (signed char)-24;
signed char var_12 = (signed char)41;
int var_13 = -2089384756;
long long int var_14 = -7636251105418047385LL;
long long int var_15 = 2334911901754311050LL;
int var_16 = -2124821645;
signed char var_17 = (signed char)15;
long long int var_18 = -6870592006210482495LL;
int zero = 0;
unsigned char var_19 = (unsigned char)153;
signed char var_20 = (signed char)39;
signed char var_21 = (signed char)-102;
void init() {
}

void checksum() {
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
