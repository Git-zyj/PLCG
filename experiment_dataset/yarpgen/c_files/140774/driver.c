#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)75;
signed char var_4 = (signed char)-36;
unsigned short var_7 = (unsigned short)37336;
int var_9 = 597923540;
unsigned short var_10 = (unsigned short)33584;
int zero = 0;
unsigned long long int var_11 = 10187616570981827247ULL;
long long int var_12 = -3654611173427806210LL;
unsigned short var_13 = (unsigned short)31173;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
