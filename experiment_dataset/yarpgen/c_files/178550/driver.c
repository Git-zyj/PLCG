#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 867867438577740339LL;
short var_5 = (short)14090;
unsigned char var_6 = (unsigned char)11;
int zero = 0;
unsigned long long int var_11 = 17161357046590784008ULL;
long long int var_12 = 8949205888812396750LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
