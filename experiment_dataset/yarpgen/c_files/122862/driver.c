#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-19719;
long long int var_3 = 3303973892482803972LL;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 16523223690631996997ULL;
unsigned char var_12 = (unsigned char)94;
short var_13 = (short)-4442;
signed char var_16 = (signed char)-29;
int zero = 0;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
