#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8927546781165738041LL;
unsigned short var_1 = (unsigned short)30340;
short var_6 = (short)-27776;
unsigned long long int var_7 = 12965172068356248956ULL;
short var_11 = (short)-7662;
unsigned long long int var_18 = 5389909906419928203ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)4051;
unsigned long long int var_21 = 16439361340029510275ULL;
unsigned short var_22 = (unsigned short)13373;
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
