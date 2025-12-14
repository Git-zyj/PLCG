#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-54;
unsigned int var_1 = 3604936627U;
unsigned int var_2 = 3048675549U;
unsigned int var_3 = 3697115577U;
long long int var_4 = 399871344934202192LL;
int var_6 = 1143137048;
unsigned int var_7 = 1130088129U;
signed char var_8 = (signed char)-115;
unsigned int var_9 = 3456409295U;
unsigned int var_10 = 50922481U;
int zero = 0;
int var_12 = -185234032;
unsigned char var_13 = (unsigned char)241;
int var_14 = -835077167;
int var_15 = 349648190;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
