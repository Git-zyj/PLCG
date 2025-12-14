#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9942722196101023285ULL;
unsigned long long int var_2 = 10264512814909484816ULL;
unsigned short var_3 = (unsigned short)32700;
unsigned char var_7 = (unsigned char)39;
unsigned long long int var_10 = 9390771680403577352ULL;
int zero = 0;
int var_11 = -1412314051;
int var_12 = 257255688;
void init() {
}

void checksum() {
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
