#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16525466623311472934ULL;
unsigned long long int var_2 = 17193904418565979968ULL;
signed char var_3 = (signed char)-9;
short var_7 = (short)-2779;
unsigned short var_8 = (unsigned short)30104;
int var_9 = -1789350098;
int zero = 0;
short var_10 = (short)-27651;
unsigned long long int var_11 = 10600984442575834495ULL;
short var_12 = (short)-19130;
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
