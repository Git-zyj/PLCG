#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)112;
unsigned char var_4 = (unsigned char)123;
signed char var_8 = (signed char)114;
unsigned short var_9 = (unsigned short)6883;
unsigned char var_10 = (unsigned char)177;
signed char var_11 = (signed char)-67;
_Bool var_12 = (_Bool)0;
_Bool var_14 = (_Bool)1;
long long int var_18 = -3940955225376910690LL;
int zero = 0;
signed char var_19 = (signed char)41;
signed char var_20 = (signed char)-72;
signed char var_21 = (signed char)-27;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
