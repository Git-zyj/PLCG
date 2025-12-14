#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 927809440870718639ULL;
long long int var_2 = -7111510148506665596LL;
_Bool var_3 = (_Bool)1;
int var_5 = 685593939;
int var_8 = -1679814383;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)33;
int var_12 = 933684937;
unsigned short var_14 = (unsigned short)53646;
int var_15 = 1967350908;
int zero = 0;
int var_20 = -1285576821;
int var_21 = -1620658221;
unsigned int var_22 = 1968896995U;
signed char var_23 = (signed char)-49;
unsigned char var_24 = (unsigned char)241;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
