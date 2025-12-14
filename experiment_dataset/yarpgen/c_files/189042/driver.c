#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14796365189693033887ULL;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 5828983601269221937ULL;
unsigned int var_5 = 3580047841U;
unsigned char var_6 = (unsigned char)236;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)83;
long long int var_9 = -7054690358833993224LL;
unsigned int var_11 = 3075061237U;
int zero = 0;
unsigned char var_12 = (unsigned char)245;
unsigned long long int var_13 = 10613040615563766889ULL;
unsigned char var_14 = (unsigned char)217;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
