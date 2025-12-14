#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-105;
signed char var_6 = (signed char)-22;
signed char var_8 = (signed char)2;
unsigned short var_9 = (unsigned short)29370;
unsigned short var_12 = (unsigned short)60890;
signed char var_18 = (signed char)-35;
int zero = 0;
int var_19 = -1018123925;
long long int var_20 = 1050530339774001280LL;
signed char var_21 = (signed char)112;
unsigned short var_22 = (unsigned short)16399;
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
