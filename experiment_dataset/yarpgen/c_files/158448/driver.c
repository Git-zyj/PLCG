#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2154189714707778517LL;
int var_4 = 453996791;
unsigned short var_13 = (unsigned short)25037;
unsigned char var_14 = (unsigned char)72;
unsigned short var_16 = (unsigned short)55353;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 14765618743338036203ULL;
unsigned int var_21 = 2954981013U;
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
