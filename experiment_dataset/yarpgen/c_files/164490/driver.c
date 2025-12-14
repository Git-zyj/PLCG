#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = -1714828067;
short var_2 = (short)22820;
signed char var_4 = (signed char)21;
unsigned long long int var_6 = 14225080338248602378ULL;
unsigned long long int var_8 = 14021185954388281387ULL;
int var_11 = -976572363;
unsigned long long int var_13 = 9974238756904488796ULL;
short var_14 = (short)26824;
int zero = 0;
short var_15 = (short)-2295;
unsigned short var_16 = (unsigned short)60505;
unsigned long long int var_17 = 709906559743159442ULL;
unsigned long long int var_18 = 5597229379511379149ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
