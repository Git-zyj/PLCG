#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4323174207296087786ULL;
unsigned short var_1 = (unsigned short)28067;
long long int var_2 = -2441954021603483546LL;
int var_5 = -2023754619;
unsigned char var_6 = (unsigned char)129;
unsigned int var_8 = 1349453448U;
signed char var_9 = (signed char)8;
unsigned char var_10 = (unsigned char)12;
int var_11 = -1655471373;
int zero = 0;
short var_17 = (short)-279;
unsigned long long int var_18 = 8501274775791935377ULL;
long long int var_19 = 8744937816058419381LL;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
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
