#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3125258481883147618ULL;
unsigned int var_7 = 1209149506U;
unsigned short var_10 = (unsigned short)18792;
unsigned char var_18 = (unsigned char)130;
int zero = 0;
unsigned long long int var_19 = 8469099486375442842ULL;
long long int var_20 = -7898115748563753965LL;
long long int var_21 = 7248803535739975430LL;
unsigned long long int var_22 = 9616707460433388282ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
