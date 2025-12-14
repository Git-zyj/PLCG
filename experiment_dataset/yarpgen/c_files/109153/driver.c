#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8977000635264604820LL;
unsigned int var_5 = 167693051U;
unsigned short var_11 = (unsigned short)36471;
unsigned long long int var_12 = 4029100848089874098ULL;
int var_18 = -1190442219;
int zero = 0;
long long int var_19 = -3039107650554498055LL;
short var_20 = (short)-28489;
unsigned long long int var_21 = 16153376901289126123ULL;
unsigned short var_22 = (unsigned short)17525;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
