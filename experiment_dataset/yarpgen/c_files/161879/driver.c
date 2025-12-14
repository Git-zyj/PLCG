#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)235;
unsigned long long int var_4 = 12665258289597661487ULL;
unsigned long long int var_6 = 8220110008274550591ULL;
unsigned char var_7 = (unsigned char)94;
unsigned long long int var_8 = 1166473457016127455ULL;
unsigned long long int var_9 = 14912390549780891476ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)193;
unsigned char var_16 = (unsigned char)121;
unsigned long long int var_17 = 15285111998562272895ULL;
unsigned long long int var_18 = 11840545828851161205ULL;
unsigned char var_19 = (unsigned char)24;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
