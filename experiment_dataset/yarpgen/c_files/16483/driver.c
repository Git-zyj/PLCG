#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)58726;
int var_4 = -461784678;
long long int var_7 = -2073385759425842753LL;
unsigned char var_8 = (unsigned char)4;
int var_11 = -11936909;
unsigned short var_12 = (unsigned short)36871;
int var_14 = 1882366055;
int zero = 0;
unsigned long long int var_19 = 9682321361433722843ULL;
unsigned char var_20 = (unsigned char)153;
void init() {
}

void checksum() {
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
