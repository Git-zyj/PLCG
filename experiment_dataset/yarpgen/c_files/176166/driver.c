#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)17;
long long int var_2 = -4653536140538693561LL;
unsigned short var_3 = (unsigned short)20031;
unsigned short var_4 = (unsigned short)32488;
int var_6 = 1203757698;
short var_7 = (short)15074;
int zero = 0;
short var_11 = (short)-15780;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
