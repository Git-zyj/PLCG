#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20473;
signed char var_1 = (signed char)-5;
unsigned char var_2 = (unsigned char)181;
unsigned char var_4 = (unsigned char)207;
unsigned long long int var_7 = 17138439701213938325ULL;
unsigned char var_10 = (unsigned char)32;
unsigned int var_11 = 2794676551U;
unsigned int var_12 = 3651357183U;
int zero = 0;
unsigned char var_16 = (unsigned char)43;
int var_17 = 1198954365;
unsigned char var_18 = (unsigned char)194;
void init() {
}

void checksum() {
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
