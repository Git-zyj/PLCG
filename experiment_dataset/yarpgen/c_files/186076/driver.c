#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2810246081U;
int var_1 = 48898053;
long long int var_2 = -7120557317392025439LL;
int var_3 = -70846477;
signed char var_4 = (signed char)-119;
unsigned short var_9 = (unsigned short)14088;
int var_11 = -252831417;
unsigned short var_13 = (unsigned short)36697;
unsigned char var_18 = (unsigned char)145;
int zero = 0;
int var_19 = 466750765;
unsigned int var_20 = 3331546376U;
long long int var_21 = -2364324246208528866LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
