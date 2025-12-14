#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1098466699;
_Bool var_8 = (_Bool)1;
unsigned char var_10 = (unsigned char)159;
unsigned short var_15 = (unsigned short)49698;
int zero = 0;
unsigned long long int var_19 = 11097518025727208865ULL;
unsigned long long int var_20 = 16921915791196787429ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
