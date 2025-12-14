#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)50230;
signed char var_2 = (signed char)-84;
unsigned short var_3 = (unsigned short)17410;
unsigned int var_6 = 355492906U;
unsigned int var_7 = 750855222U;
unsigned short var_8 = (unsigned short)16534;
signed char var_11 = (signed char)-78;
signed char var_14 = (signed char)28;
signed char var_15 = (signed char)114;
int zero = 0;
unsigned short var_18 = (unsigned short)12590;
unsigned short var_19 = (unsigned short)1105;
unsigned short var_20 = (unsigned short)49451;
unsigned char var_21 = (unsigned char)61;
unsigned long long int var_22 = 6572892833363685114ULL;
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
