#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 4139387805222935713LL;
signed char var_8 = (signed char)80;
int zero = 0;
signed char var_11 = (signed char)-111;
long long int var_12 = 1776063333716942326LL;
unsigned int var_13 = 4126896759U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
