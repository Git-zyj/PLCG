#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)81;
unsigned int var_3 = 2079403317U;
unsigned short var_5 = (unsigned short)49871;
unsigned long long int var_6 = 11921401793986913535ULL;
int var_9 = 295850319;
int zero = 0;
unsigned char var_10 = (unsigned char)204;
unsigned long long int var_11 = 7003281576082455032ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
