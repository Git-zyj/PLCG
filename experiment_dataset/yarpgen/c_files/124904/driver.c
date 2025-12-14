#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4817479821352047745ULL;
_Bool var_2 = (_Bool)0;
unsigned long long int var_4 = 8797807653315926789ULL;
_Bool var_7 = (_Bool)0;
unsigned int var_9 = 2274983016U;
int zero = 0;
int var_10 = 1674199432;
unsigned short var_11 = (unsigned short)41325;
unsigned long long int var_12 = 14338318500893054589ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
