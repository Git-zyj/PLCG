#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-19014;
signed char var_5 = (signed char)72;
unsigned int var_7 = 156122277U;
long long int var_8 = -6697500021638157529LL;
long long int var_10 = 5349766814844484250LL;
unsigned long long int var_12 = 6593852907265782885ULL;
short var_13 = (short)1270;
int zero = 0;
unsigned long long int var_14 = 4304947492051276148ULL;
long long int var_15 = 1215769679620824019LL;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-108;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
