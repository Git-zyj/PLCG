#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -876019820;
int var_2 = -396266587;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)170;
long long int var_5 = 4476184908324852836LL;
unsigned long long int var_6 = 10244201595548164356ULL;
long long int var_7 = 3336170685298159824LL;
unsigned int var_8 = 492114245U;
long long int var_9 = 8413119775456682464LL;
int var_10 = -686195055;
_Bool var_11 = (_Bool)0;
int zero = 0;
long long int var_12 = -354369446384924268LL;
unsigned short var_13 = (unsigned short)33137;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
