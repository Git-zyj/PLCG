#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14639689807067377800ULL;
unsigned char var_1 = (unsigned char)22;
long long int var_6 = -346505836839788976LL;
unsigned char var_7 = (unsigned char)103;
unsigned char var_12 = (unsigned char)168;
unsigned long long int var_13 = 7525481598615184028ULL;
long long int var_18 = -24977636067552599LL;
int zero = 0;
unsigned long long int var_19 = 11191045533451172797ULL;
unsigned char var_20 = (unsigned char)81;
unsigned long long int var_21 = 5394503580855644470ULL;
short var_22 = (short)19345;
unsigned long long int var_23 = 12502859326350794167ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
