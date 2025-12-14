#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17084260638965915012ULL;
_Bool var_2 = (_Bool)1;
long long int var_3 = 4603037318905955125LL;
_Bool var_4 = (_Bool)1;
unsigned short var_8 = (unsigned short)38508;
signed char var_10 = (signed char)-10;
int var_11 = -1446817738;
_Bool var_12 = (_Bool)0;
int zero = 0;
long long int var_13 = 1354221557776742285LL;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)0;
short var_16 = (short)-21388;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
