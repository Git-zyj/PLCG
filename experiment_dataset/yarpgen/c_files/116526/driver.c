#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6552521170054894293LL;
int var_3 = -414216424;
unsigned char var_5 = (unsigned char)186;
long long int var_6 = -3796777988347755644LL;
unsigned short var_11 = (unsigned short)23661;
long long int var_12 = -3477828880151128589LL;
int zero = 0;
long long int var_13 = -3718234487927849353LL;
signed char var_14 = (signed char)-118;
void init() {
}

void checksum() {
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
