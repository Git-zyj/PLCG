#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)5;
signed char var_1 = (signed char)9;
long long int var_2 = -5348338816251082060LL;
unsigned short var_3 = (unsigned short)56090;
signed char var_4 = (signed char)-94;
unsigned int var_5 = 2480880911U;
unsigned long long int var_6 = 5292169321132573023ULL;
int var_8 = 906212945;
unsigned long long int var_9 = 82606619425246377ULL;
signed char var_10 = (signed char)27;
int zero = 0;
unsigned char var_11 = (unsigned char)75;
unsigned short var_12 = (unsigned short)56467;
unsigned short var_13 = (unsigned short)27693;
_Bool var_14 = (_Bool)1;
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
