#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2390559248591984969LL;
unsigned char var_2 = (unsigned char)146;
long long int var_4 = -7143267282374338699LL;
unsigned long long int var_5 = 4718005163932121862ULL;
unsigned long long int var_9 = 15801181552021317174ULL;
unsigned char var_11 = (unsigned char)138;
unsigned char var_12 = (unsigned char)251;
int zero = 0;
unsigned char var_14 = (unsigned char)24;
long long int var_15 = -60967275242583699LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
