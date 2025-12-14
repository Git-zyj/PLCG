#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-57;
unsigned short var_1 = (unsigned short)37624;
short var_4 = (short)13525;
short var_8 = (short)-27279;
unsigned char var_9 = (unsigned char)42;
unsigned char var_11 = (unsigned char)126;
unsigned char var_12 = (unsigned char)107;
signed char var_14 = (signed char)6;
long long int var_15 = -4474915985209034344LL;
signed char var_19 = (signed char)40;
int zero = 0;
unsigned long long int var_20 = 4577710841940881621ULL;
long long int var_21 = -6770732157583170842LL;
short var_22 = (short)-15388;
long long int var_23 = -7625440971269069229LL;
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
