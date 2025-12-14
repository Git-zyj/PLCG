#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)23;
unsigned short var_1 = (unsigned short)38313;
signed char var_2 = (signed char)43;
unsigned int var_4 = 3802426739U;
int var_6 = -1908390374;
int var_8 = -1531793303;
int var_10 = 201040609;
int zero = 0;
long long int var_12 = 596244362205533168LL;
int var_13 = -1041272370;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
