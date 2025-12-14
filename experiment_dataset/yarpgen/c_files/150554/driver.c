#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2130792759;
unsigned long long int var_2 = 7086467501224419282ULL;
signed char var_7 = (signed char)-69;
long long int var_8 = 3962263146118076532LL;
int var_11 = 312102391;
signed char var_12 = (signed char)23;
short var_14 = (short)29111;
unsigned short var_15 = (unsigned short)32050;
unsigned char var_16 = (unsigned char)142;
unsigned short var_18 = (unsigned short)37922;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)16949;
signed char var_21 = (signed char)-52;
unsigned int var_22 = 3898475838U;
unsigned int var_23 = 566311790U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
