#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7749078882276371066ULL;
unsigned short var_1 = (unsigned short)19158;
int var_3 = 1007064649;
unsigned short var_4 = (unsigned short)51756;
unsigned short var_5 = (unsigned short)47500;
long long int var_6 = 5612001825037415982LL;
unsigned short var_7 = (unsigned short)1754;
unsigned char var_8 = (unsigned char)178;
unsigned long long int var_9 = 803731582786548214ULL;
unsigned long long int var_10 = 1674005790563935505ULL;
int zero = 0;
long long int var_11 = 2270066579765170997LL;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 11646436659111467561ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
