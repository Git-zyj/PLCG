#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8134795602536123343ULL;
unsigned short var_3 = (unsigned short)10073;
unsigned short var_10 = (unsigned short)4920;
unsigned long long int var_14 = 13414269735784027370ULL;
unsigned long long int var_16 = 3229509802829865760ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)189;
unsigned long long int var_21 = 9047609636641525446ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
