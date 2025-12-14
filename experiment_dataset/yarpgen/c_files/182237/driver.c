#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_10 = (short)22174;
unsigned long long int var_11 = 10760116598548401195ULL;
int zero = 0;
unsigned long long int var_17 = 17995439588279505872ULL;
int var_18 = -991590782;
long long int var_19 = -1093864820246245976LL;
void init() {
}

void checksum() {
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
