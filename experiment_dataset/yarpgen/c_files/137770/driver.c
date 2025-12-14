#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)228;
unsigned long long int var_9 = 6539407357735200895ULL;
unsigned char var_10 = (unsigned char)200;
int var_16 = 2126079048;
signed char var_18 = (signed char)-63;
int var_19 = -1443742765;
int zero = 0;
long long int var_20 = 7820654155248900852LL;
unsigned int var_21 = 3780081945U;
unsigned long long int var_22 = 16849706922749462977ULL;
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
