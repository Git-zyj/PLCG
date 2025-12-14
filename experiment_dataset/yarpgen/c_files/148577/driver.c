#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)111;
short var_5 = (short)32515;
unsigned short var_9 = (unsigned short)38283;
unsigned int var_13 = 436119162U;
signed char var_16 = (signed char)-105;
short var_17 = (short)27687;
int zero = 0;
unsigned int var_18 = 2111193901U;
short var_19 = (short)11243;
long long int var_20 = -4343473154687862520LL;
int var_21 = -1431501416;
signed char var_22 = (signed char)-52;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
