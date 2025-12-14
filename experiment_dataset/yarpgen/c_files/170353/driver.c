#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)31;
long long int var_1 = -9056675071551527979LL;
long long int var_4 = -5827306041302356476LL;
unsigned long long int var_5 = 17187920995463933506ULL;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)43454;
unsigned int var_12 = 1462481453U;
int var_14 = 1023635777;
long long int var_15 = -1987339998754425901LL;
int zero = 0;
unsigned short var_16 = (unsigned short)13559;
unsigned int var_17 = 2448428115U;
short var_18 = (short)-3140;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)181;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
