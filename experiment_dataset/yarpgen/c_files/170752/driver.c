#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)206;
signed char var_3 = (signed char)-85;
int var_5 = 1033304138;
int zero = 0;
unsigned long long int var_12 = 5687193239769867872ULL;
long long int var_13 = -2380681829136274532LL;
unsigned long long int var_14 = 16949710023763658182ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
