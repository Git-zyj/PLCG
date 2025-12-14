#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-57;
unsigned short var_1 = (unsigned short)40213;
unsigned short var_4 = (unsigned short)43997;
signed char var_6 = (signed char)-2;
unsigned short var_8 = (unsigned short)50411;
long long int var_10 = 9041992538454651890LL;
short var_11 = (short)-11982;
int zero = 0;
unsigned char var_12 = (unsigned char)96;
unsigned long long int var_13 = 13167191529827844932ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
