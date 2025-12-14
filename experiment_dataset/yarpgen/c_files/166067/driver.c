#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21837;
int var_1 = -1746905794;
unsigned int var_2 = 279542447U;
signed char var_3 = (signed char)87;
unsigned short var_4 = (unsigned short)44900;
long long int var_5 = -7933840850220685827LL;
unsigned short var_6 = (unsigned short)17252;
unsigned char var_7 = (unsigned char)23;
unsigned int var_8 = 3578703325U;
int var_9 = 35492132;
unsigned char var_11 = (unsigned char)90;
int zero = 0;
signed char var_12 = (signed char)62;
short var_13 = (short)-8813;
void init() {
}

void checksum() {
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
