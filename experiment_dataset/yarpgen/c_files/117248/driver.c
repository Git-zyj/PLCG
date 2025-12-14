#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)108;
signed char var_3 = (signed char)76;
unsigned char var_4 = (unsigned char)224;
unsigned long long int var_7 = 11337866566448756948ULL;
signed char var_8 = (signed char)-85;
unsigned int var_10 = 4025176238U;
unsigned long long int var_11 = 2627277103285795780ULL;
unsigned int var_15 = 776479726U;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)65;
unsigned char var_21 = (unsigned char)134;
void init() {
}

void checksum() {
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
