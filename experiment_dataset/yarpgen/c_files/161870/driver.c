#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)12931;
unsigned long long int var_6 = 6174241047658719166ULL;
unsigned long long int var_10 = 5631197970292386052ULL;
int zero = 0;
unsigned long long int var_13 = 16768719986986750234ULL;
unsigned long long int var_14 = 17284920991423412597ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
