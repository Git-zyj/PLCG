#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15330839842510046898ULL;
int var_1 = -92279634;
int var_2 = -1483548670;
unsigned char var_5 = (unsigned char)191;
unsigned short var_8 = (unsigned short)1099;
signed char var_11 = (signed char)-106;
short var_15 = (short)9927;
signed char var_17 = (signed char)-68;
int zero = 0;
long long int var_18 = 7358422726219367194LL;
unsigned int var_19 = 3167285526U;
void init() {
}

void checksum() {
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
