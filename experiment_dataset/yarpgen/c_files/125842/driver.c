#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)22858;
unsigned short var_2 = (unsigned short)20027;
unsigned short var_3 = (unsigned short)151;
int var_4 = 117766736;
short var_5 = (short)656;
unsigned short var_7 = (unsigned short)28666;
unsigned char var_8 = (unsigned char)188;
int var_9 = -2036251674;
unsigned long long int var_10 = 12519736225841967872ULL;
unsigned int var_12 = 3718128119U;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 14066032584767304497ULL;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 2009606665U;
unsigned short var_20 = (unsigned short)9280;
void init() {
}

void checksum() {
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
