#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6284574964456658976LL;
signed char var_2 = (signed char)-23;
unsigned long long int var_3 = 9278915622894916694ULL;
signed char var_6 = (signed char)127;
signed char var_7 = (signed char)-12;
unsigned char var_9 = (unsigned char)36;
int zero = 0;
unsigned long long int var_11 = 8389175003284634771ULL;
unsigned char var_12 = (unsigned char)162;
long long int var_13 = -8084212471368273436LL;
int var_14 = -786070434;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
