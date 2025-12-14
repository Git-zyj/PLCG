#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -6249307254516440886LL;
unsigned short var_13 = (unsigned short)1277;
unsigned long long int var_18 = 17937594182026713720ULL;
int zero = 0;
short var_20 = (short)29213;
int var_21 = 703237563;
unsigned long long int var_22 = 2117630164968043958ULL;
long long int var_23 = 5696311593904880815LL;
void init() {
}

void checksum() {
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
