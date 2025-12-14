#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16564630077025462775ULL;
unsigned long long int var_5 = 9798498396985062658ULL;
signed char var_9 = (signed char)-111;
int zero = 0;
signed char var_12 = (signed char)90;
unsigned short var_13 = (unsigned short)21699;
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
