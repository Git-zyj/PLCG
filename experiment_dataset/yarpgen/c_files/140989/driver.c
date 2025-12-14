#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)82;
unsigned short var_3 = (unsigned short)11754;
long long int var_4 = -4411669857581805714LL;
int var_7 = 1985731660;
short var_8 = (short)-15870;
unsigned char var_9 = (unsigned char)69;
short var_10 = (short)16091;
unsigned short var_11 = (unsigned short)26839;
int zero = 0;
unsigned long long int var_13 = 8655028304001574896ULL;
signed char var_14 = (signed char)-55;
_Bool var_15 = (_Bool)1;
int var_16 = -643783320;
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
