#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8224927192173772850ULL;
signed char var_3 = (signed char)57;
_Bool var_4 = (_Bool)1;
int var_12 = 1514777516;
signed char var_15 = (signed char)-103;
int zero = 0;
int var_18 = -1470361867;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)17;
unsigned long long int var_21 = 12812568598292000265ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
