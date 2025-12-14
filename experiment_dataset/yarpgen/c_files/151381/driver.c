#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)183;
long long int var_2 = 4735303832172657769LL;
unsigned short var_4 = (unsigned short)54281;
unsigned char var_7 = (unsigned char)180;
long long int var_13 = -6772681277236390331LL;
long long int var_14 = -7096215583937075855LL;
signed char var_15 = (signed char)9;
int zero = 0;
int var_16 = 2136120160;
signed char var_17 = (signed char)-14;
unsigned char var_18 = (unsigned char)89;
unsigned int var_19 = 4000092756U;
void init() {
}

void checksum() {
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
