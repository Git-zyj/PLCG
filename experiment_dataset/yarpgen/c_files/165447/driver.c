#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-19578;
long long int var_6 = -2800621862105633921LL;
unsigned char var_19 = (unsigned char)251;
int zero = 0;
unsigned char var_20 = (unsigned char)196;
unsigned long long int var_21 = 5789134953469691057ULL;
int var_22 = -2108457226;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
