#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5717488299150210069LL;
unsigned long long int var_1 = 16170470137691557799ULL;
unsigned long long int var_3 = 18243257031537074012ULL;
short var_6 = (short)6766;
unsigned char var_7 = (unsigned char)138;
_Bool var_8 = (_Bool)0;
short var_9 = (short)-2456;
int zero = 0;
signed char var_11 = (signed char)-1;
long long int var_12 = -4482447915566806409LL;
unsigned long long int var_13 = 17788353588488396066ULL;
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
