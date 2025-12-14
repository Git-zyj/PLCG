#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)128;
unsigned short var_8 = (unsigned short)33159;
int var_9 = 824006744;
short var_10 = (short)-6527;
unsigned char var_11 = (unsigned char)101;
signed char var_12 = (signed char)-61;
short var_14 = (short)14887;
signed char var_15 = (signed char)28;
long long int var_17 = 3617047402692241920LL;
unsigned long long int var_18 = 9763162931616424341ULL;
int zero = 0;
unsigned long long int var_20 = 2885232871721103849ULL;
unsigned long long int var_21 = 11120331368792070924ULL;
unsigned int var_22 = 71442863U;
unsigned short var_23 = (unsigned short)50375;
long long int var_24 = 4751507721981797969LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
