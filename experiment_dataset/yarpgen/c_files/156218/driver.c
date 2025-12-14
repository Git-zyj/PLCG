#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25424;
long long int var_1 = -1760152146618156284LL;
signed char var_5 = (signed char)-34;
unsigned char var_7 = (unsigned char)2;
unsigned char var_11 = (unsigned char)92;
int var_14 = -1386179438;
int zero = 0;
unsigned short var_15 = (unsigned short)43121;
unsigned char var_16 = (unsigned char)40;
unsigned long long int var_17 = 2572882731230021571ULL;
long long int var_18 = 618069120710369137LL;
unsigned char var_19 = (unsigned char)19;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
