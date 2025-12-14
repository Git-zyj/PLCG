#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -163007397;
long long int var_3 = 8620121257148896684LL;
unsigned int var_5 = 2174506393U;
long long int var_6 = -4151835580820139851LL;
long long int var_7 = -5611977546530297919LL;
int var_8 = 1126315939;
long long int var_9 = -7651970528497435919LL;
int zero = 0;
unsigned long long int var_10 = 4058590777170265605ULL;
int var_11 = -1903421652;
long long int var_12 = -4840702386986402868LL;
int var_13 = -35099902;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
