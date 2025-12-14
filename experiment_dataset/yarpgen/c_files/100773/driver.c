#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1857096080063804585LL;
short var_2 = (short)-1745;
unsigned int var_5 = 2732235057U;
unsigned short var_6 = (unsigned short)30882;
short var_9 = (short)26092;
unsigned short var_13 = (unsigned short)24551;
unsigned int var_14 = 3026055435U;
unsigned int var_16 = 2716776210U;
int zero = 0;
int var_18 = 1170554416;
unsigned long long int var_19 = 14507390148301599452ULL;
unsigned char var_20 = (unsigned char)118;
short var_21 = (short)31285;
unsigned int var_22 = 895597379U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
