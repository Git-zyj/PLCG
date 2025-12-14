#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)25;
unsigned char var_4 = (unsigned char)254;
long long int var_10 = -7108886672890386422LL;
unsigned int var_11 = 3437625442U;
int zero = 0;
int var_16 = -875941437;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 4083949900622851842ULL;
unsigned short var_19 = (unsigned short)45102;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
