#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -51542460;
unsigned long long int var_1 = 6776001875503028357ULL;
short var_2 = (short)-32382;
unsigned long long int var_5 = 6392068245867823700ULL;
signed char var_6 = (signed char)104;
signed char var_7 = (signed char)80;
unsigned long long int var_9 = 14510556179518614202ULL;
unsigned long long int var_10 = 12496342446324055896ULL;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned char var_12 = (unsigned char)13;
int var_13 = 2091038395;
unsigned long long int var_14 = 10067818811419285676ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
