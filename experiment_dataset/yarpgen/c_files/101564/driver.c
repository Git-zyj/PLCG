#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)114;
unsigned char var_1 = (unsigned char)66;
signed char var_2 = (signed char)-115;
long long int var_4 = 2486425530246679809LL;
signed char var_5 = (signed char)-90;
signed char var_7 = (signed char)95;
int var_10 = -1755135995;
int zero = 0;
unsigned char var_11 = (unsigned char)97;
int var_12 = -1342525745;
_Bool var_13 = (_Bool)1;
short var_14 = (short)9481;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
