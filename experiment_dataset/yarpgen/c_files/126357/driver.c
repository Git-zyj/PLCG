#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)45107;
unsigned long long int var_5 = 3235020486728730262ULL;
long long int var_6 = 3383444855135588796LL;
long long int var_8 = 4392873908513724410LL;
unsigned short var_9 = (unsigned short)50904;
int zero = 0;
signed char var_10 = (signed char)21;
signed char var_11 = (signed char)-110;
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
