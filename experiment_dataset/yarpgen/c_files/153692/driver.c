#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)540;
int var_1 = -547453948;
unsigned long long int var_3 = 7560656247571886795ULL;
unsigned short var_4 = (unsigned short)59351;
signed char var_6 = (signed char)-125;
unsigned long long int var_7 = 10695672071500534453ULL;
long long int var_8 = -5177219911073313662LL;
int var_9 = -986359785;
signed char var_10 = (signed char)103;
unsigned short var_11 = (unsigned short)25578;
int zero = 0;
unsigned char var_14 = (unsigned char)128;
unsigned long long int var_15 = 7602959522316712216ULL;
signed char var_16 = (signed char)-80;
long long int var_17 = -19101432839148217LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
