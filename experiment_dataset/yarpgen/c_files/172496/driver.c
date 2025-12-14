#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -454530949;
int var_1 = -352316139;
unsigned char var_2 = (unsigned char)157;
unsigned char var_3 = (unsigned char)26;
_Bool var_4 = (_Bool)0;
int var_6 = -1956336154;
int var_7 = 2059039677;
int var_9 = -1145581529;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)141;
unsigned char var_14 = (unsigned char)38;
long long int var_15 = 6953722235925795767LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
