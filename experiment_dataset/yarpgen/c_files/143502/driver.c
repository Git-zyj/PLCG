#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)-1110;
unsigned short var_9 = (unsigned short)54243;
long long int var_15 = -6015282060641258745LL;
int zero = 0;
unsigned char var_18 = (unsigned char)1;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 2522727698358115589ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
