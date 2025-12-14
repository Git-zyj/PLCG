#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-17;
signed char var_6 = (signed char)112;
signed char var_7 = (signed char)-35;
int var_8 = 1701360318;
unsigned long long int var_13 = 10376422632656826242ULL;
long long int var_18 = 1057476827259324859LL;
int zero = 0;
unsigned char var_20 = (unsigned char)201;
unsigned char var_21 = (unsigned char)216;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
