#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)23419;
long long int var_2 = 6439106396433217259LL;
long long int var_3 = -1870287989434700911LL;
signed char var_4 = (signed char)-48;
unsigned long long int var_5 = 11812549624587015881ULL;
unsigned int var_6 = 2402120190U;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned int var_10 = 3187178442U;
unsigned char var_11 = (unsigned char)40;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
