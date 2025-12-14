#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 9150830178920512382ULL;
unsigned long long int var_7 = 14114518838918508677ULL;
unsigned long long int var_13 = 10338858818259868267ULL;
int zero = 0;
short var_20 = (short)4597;
unsigned long long int var_21 = 3613853478155381666ULL;
unsigned short var_22 = (unsigned short)15177;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
