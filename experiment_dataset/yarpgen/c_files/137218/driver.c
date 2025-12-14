#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)216;
signed char var_3 = (signed char)121;
unsigned int var_5 = 3162913784U;
unsigned char var_6 = (unsigned char)126;
signed char var_9 = (signed char)-50;
unsigned short var_10 = (unsigned short)42890;
unsigned int var_11 = 1430445826U;
int zero = 0;
unsigned long long int var_13 = 897486313171312281ULL;
_Bool var_14 = (_Bool)1;
int var_15 = 593648480;
void init() {
}

void checksum() {
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
