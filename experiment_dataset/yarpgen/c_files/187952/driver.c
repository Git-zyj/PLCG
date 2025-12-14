#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)177;
_Bool var_3 = (_Bool)0;
unsigned int var_9 = 1191050722U;
_Bool var_14 = (_Bool)1;
long long int var_17 = -2864003856313559312LL;
_Bool var_18 = (_Bool)1;
long long int var_19 = 3799424628497897478LL;
int zero = 0;
unsigned char var_20 = (unsigned char)211;
long long int var_21 = 8341126360149858042LL;
_Bool var_22 = (_Bool)0;
unsigned long long int var_23 = 14454057948893665436ULL;
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
