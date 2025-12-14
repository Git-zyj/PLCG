#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)26083;
unsigned int var_2 = 759240896U;
unsigned int var_4 = 2010233183U;
unsigned short var_5 = (unsigned short)19050;
unsigned char var_9 = (unsigned char)94;
unsigned int var_11 = 1983548356U;
unsigned long long int var_12 = 10753038354471453643ULL;
unsigned short var_13 = (unsigned short)24758;
int zero = 0;
short var_19 = (short)-5581;
unsigned int var_20 = 3738605219U;
signed char var_21 = (signed char)91;
void init() {
}

void checksum() {
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
