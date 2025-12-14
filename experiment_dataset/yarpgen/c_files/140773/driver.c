#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)161;
unsigned long long int var_4 = 13087098196318670879ULL;
unsigned int var_5 = 3346549849U;
short var_7 = (short)14789;
long long int var_9 = -7507795424082381178LL;
long long int var_10 = -1128863466907987143LL;
long long int var_11 = -6090995154572592651LL;
signed char var_12 = (signed char)91;
unsigned long long int var_14 = 15506627078400114255ULL;
unsigned int var_15 = 1310478892U;
long long int var_16 = 8290241379205126132LL;
int zero = 0;
short var_17 = (short)8122;
unsigned char var_18 = (unsigned char)17;
int var_19 = 1228273369;
long long int var_20 = -3340298638392892159LL;
unsigned int var_21 = 1860266786U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
