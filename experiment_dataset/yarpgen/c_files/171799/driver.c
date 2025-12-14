#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 244162662U;
long long int var_5 = 3076352148809790206LL;
unsigned char var_7 = (unsigned char)87;
long long int var_9 = 6080579983622405963LL;
long long int var_14 = -4257592748999732494LL;
int zero = 0;
signed char var_20 = (signed char)-71;
unsigned long long int var_21 = 4142256185324476275ULL;
int var_22 = -460514064;
unsigned long long int var_23 = 5297114590441161792ULL;
short var_24 = (short)-24238;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
