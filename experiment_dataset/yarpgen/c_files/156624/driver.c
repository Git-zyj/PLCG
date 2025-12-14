#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)57246;
signed char var_4 = (signed char)17;
long long int var_5 = 8200784392830873509LL;
unsigned int var_7 = 4109083508U;
long long int var_8 = 1109694859388687824LL;
unsigned int var_9 = 3938012761U;
unsigned char var_12 = (unsigned char)153;
long long int var_13 = -6021336007094805107LL;
long long int var_15 = 2565502658053422684LL;
int zero = 0;
long long int var_16 = 953454166092726571LL;
unsigned short var_17 = (unsigned short)62327;
int var_18 = 500268614;
unsigned int var_19 = 4143037730U;
int var_20 = 370217140;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
