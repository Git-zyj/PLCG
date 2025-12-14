#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9987;
long long int var_3 = -4719780189559325096LL;
signed char var_7 = (signed char)16;
unsigned short var_9 = (unsigned short)35223;
signed char var_10 = (signed char)-114;
int zero = 0;
signed char var_13 = (signed char)-58;
unsigned short var_14 = (unsigned short)16140;
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
