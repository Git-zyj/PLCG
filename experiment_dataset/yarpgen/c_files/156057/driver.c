#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2820506605U;
int var_2 = 199059767;
int var_5 = -126559815;
int var_6 = -702288830;
unsigned short var_9 = (unsigned short)63533;
signed char var_10 = (signed char)-26;
unsigned int var_13 = 3953097248U;
int zero = 0;
signed char var_14 = (signed char)86;
long long int var_15 = 4867858902343802919LL;
unsigned long long int var_16 = 1128685892701654391ULL;
short var_17 = (short)2325;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
