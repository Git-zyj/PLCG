#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10673006089343000026ULL;
unsigned char var_3 = (unsigned char)170;
int var_4 = -238995355;
unsigned char var_5 = (unsigned char)102;
int zero = 0;
signed char var_10 = (signed char)-26;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)-11;
unsigned short var_13 = (unsigned short)2833;
unsigned long long int var_14 = 7783583049044087304ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
