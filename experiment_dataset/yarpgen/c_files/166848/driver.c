#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1232934541;
signed char var_3 = (signed char)-59;
int var_5 = 1801337780;
unsigned long long int var_6 = 7233507851521302158ULL;
long long int var_11 = 9175664811808141101LL;
unsigned char var_12 = (unsigned char)49;
unsigned long long int var_13 = 9577538667395899381ULL;
int zero = 0;
int var_14 = 470919859;
unsigned long long int var_15 = 4931170166847536320ULL;
unsigned short var_16 = (unsigned short)52914;
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
