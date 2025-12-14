#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)25486;
long long int var_2 = 9082880951976637198LL;
unsigned long long int var_5 = 17923099019952107661ULL;
unsigned long long int var_6 = 10730162433272461480ULL;
long long int var_7 = -99033800934786402LL;
int zero = 0;
long long int var_10 = -4956417791136960989LL;
signed char var_11 = (signed char)-82;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
