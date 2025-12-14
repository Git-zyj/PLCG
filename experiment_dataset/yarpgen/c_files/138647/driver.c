#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-67;
unsigned char var_3 = (unsigned char)99;
unsigned long long int var_4 = 17043190690128190429ULL;
unsigned short var_10 = (unsigned short)58478;
int zero = 0;
unsigned short var_11 = (unsigned short)31608;
unsigned char var_12 = (unsigned char)51;
signed char var_13 = (signed char)36;
signed char var_14 = (signed char)-118;
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
