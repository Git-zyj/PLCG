#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2720898354646491691ULL;
short var_2 = (short)-10783;
unsigned char var_6 = (unsigned char)141;
unsigned short var_7 = (unsigned short)35381;
unsigned long long int var_9 = 6524759281821292519ULL;
long long int var_10 = -6202292042249045491LL;
short var_12 = (short)20093;
int zero = 0;
unsigned char var_18 = (unsigned char)95;
unsigned short var_19 = (unsigned short)46022;
unsigned short var_20 = (unsigned short)16260;
signed char var_21 = (signed char)-16;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
