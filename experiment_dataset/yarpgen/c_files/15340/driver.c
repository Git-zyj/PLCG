#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)123;
unsigned long long int var_2 = 9807630177880841468ULL;
unsigned short var_3 = (unsigned short)18443;
unsigned char var_4 = (unsigned char)47;
signed char var_5 = (signed char)-72;
signed char var_6 = (signed char)-83;
signed char var_7 = (signed char)-90;
unsigned long long int var_8 = 13381110874225915109ULL;
signed char var_9 = (signed char)-33;
unsigned short var_10 = (unsigned short)17826;
int zero = 0;
unsigned char var_11 = (unsigned char)158;
signed char var_12 = (signed char)-11;
int var_13 = 332168845;
signed char var_14 = (signed char)-93;
void init() {
}

void checksum() {
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
