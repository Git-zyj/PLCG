#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 16247683585001662307ULL;
unsigned long long int var_5 = 671947125874447948ULL;
unsigned long long int var_7 = 16998181465471016256ULL;
long long int var_9 = 7091117012198179655LL;
long long int var_12 = -7670340114343561300LL;
unsigned long long int var_14 = 4347686857813520209ULL;
short var_15 = (short)11936;
int zero = 0;
unsigned char var_16 = (unsigned char)68;
unsigned long long int var_17 = 18144656185297125366ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
