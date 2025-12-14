#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-1897;
long long int var_2 = 5457854056074774386LL;
unsigned long long int var_16 = 9112538466107797675ULL;
int zero = 0;
short var_18 = (short)-19702;
long long int var_19 = 3490446645702304103LL;
void init() {
}

void checksum() {
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
