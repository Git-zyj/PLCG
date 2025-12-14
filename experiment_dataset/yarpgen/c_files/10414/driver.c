#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1722062384;
signed char var_1 = (signed char)-55;
long long int var_5 = 1193339727610283466LL;
short var_6 = (short)14680;
unsigned long long int var_7 = 4185781746815011343ULL;
unsigned char var_8 = (unsigned char)30;
int var_9 = 2040425461;
short var_12 = (short)-11296;
short var_13 = (short)9967;
unsigned long long int var_15 = 17288285517014130206ULL;
unsigned long long int var_16 = 7657257352650484900ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)219;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)149;
short var_21 = (short)8080;
signed char var_22 = (signed char)-45;
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
