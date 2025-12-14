#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-61;
unsigned int var_2 = 3655385519U;
int var_4 = 351303769;
int var_5 = 1180675483;
int var_10 = -730819547;
int var_13 = 105058160;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 8793843934725915456ULL;
signed char var_16 = (signed char)127;
void init() {
}

void checksum() {
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
