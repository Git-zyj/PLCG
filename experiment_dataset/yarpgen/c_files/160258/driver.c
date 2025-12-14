#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1894091211;
unsigned char var_3 = (unsigned char)225;
unsigned char var_4 = (unsigned char)162;
int var_7 = -80493213;
unsigned short var_9 = (unsigned short)28703;
int zero = 0;
unsigned long long int var_12 = 12443923773602733195ULL;
unsigned long long int var_13 = 13570962734176572928ULL;
long long int var_14 = -7027210958145720001LL;
long long int var_15 = 4673590337357279647LL;
unsigned long long int var_16 = 14794068179718625781ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
