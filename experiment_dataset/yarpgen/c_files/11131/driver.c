#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -802056891;
unsigned char var_2 = (unsigned char)186;
unsigned long long int var_6 = 9823662220063619849ULL;
unsigned char var_11 = (unsigned char)98;
int var_12 = 1811476389;
int var_13 = 1297063551;
signed char var_15 = (signed char)-127;
int var_16 = 856031684;
int zero = 0;
signed char var_17 = (signed char)-25;
int var_18 = -572997172;
short var_19 = (short)17590;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
