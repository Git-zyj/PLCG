#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 627259964;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)43187;
unsigned short var_5 = (unsigned short)25443;
_Bool var_6 = (_Bool)1;
short var_8 = (short)-16953;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned long long int var_10 = 5354628902308005338ULL;
unsigned long long int var_11 = 16376052514755985101ULL;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)48634;
long long int var_14 = -13988493336383060LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
