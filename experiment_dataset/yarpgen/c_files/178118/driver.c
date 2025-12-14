#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4390379230086179156ULL;
signed char var_5 = (signed char)-114;
_Bool var_12 = (_Bool)0;
unsigned short var_15 = (unsigned short)42580;
long long int var_18 = 533180869413063137LL;
int zero = 0;
unsigned char var_19 = (unsigned char)162;
unsigned short var_20 = (unsigned short)48578;
long long int var_21 = 6022873301014606641LL;
unsigned short var_22 = (unsigned short)64726;
void init() {
}

void checksum() {
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
