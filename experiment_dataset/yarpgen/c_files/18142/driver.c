#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1875522991;
unsigned char var_1 = (unsigned char)26;
unsigned long long int var_3 = 5443508582533607282ULL;
long long int var_4 = -1294558046552617569LL;
unsigned char var_5 = (unsigned char)206;
short var_7 = (short)32691;
unsigned long long int var_8 = 13715032408132625359ULL;
_Bool var_12 = (_Bool)0;
unsigned int var_14 = 3468073706U;
_Bool var_15 = (_Bool)0;
int zero = 0;
short var_16 = (short)-29821;
unsigned char var_17 = (unsigned char)69;
int var_18 = 1900546312;
long long int var_19 = -4812533391272424072LL;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
