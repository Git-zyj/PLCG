#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3152938648475519054LL;
_Bool var_1 = (_Bool)0;
unsigned char var_3 = (unsigned char)122;
unsigned long long int var_4 = 15506869056613383248ULL;
unsigned char var_5 = (unsigned char)42;
unsigned char var_6 = (unsigned char)139;
unsigned int var_8 = 3964240313U;
unsigned char var_10 = (unsigned char)155;
int zero = 0;
_Bool var_11 = (_Bool)0;
long long int var_12 = 709699841090622059LL;
short var_13 = (short)17684;
unsigned long long int var_14 = 17859137943319914009ULL;
unsigned long long int var_15 = 9976494773478488279ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
