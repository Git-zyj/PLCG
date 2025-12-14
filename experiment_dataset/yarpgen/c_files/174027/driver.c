#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)50;
_Bool var_4 = (_Bool)0;
long long int var_5 = 638019401389349705LL;
signed char var_9 = (signed char)-21;
int zero = 0;
int var_10 = 1046547090;
unsigned long long int var_11 = 11771807263882445754ULL;
unsigned short var_12 = (unsigned short)40742;
unsigned char var_13 = (unsigned char)162;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
