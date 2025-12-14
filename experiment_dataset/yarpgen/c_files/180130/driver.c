#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18050068370189924935ULL;
short var_5 = (short)6264;
short var_6 = (short)11883;
signed char var_11 = (signed char)-104;
unsigned int var_12 = 1191379954U;
signed char var_13 = (signed char)-69;
long long int var_15 = -7815461994806297406LL;
int zero = 0;
short var_17 = (short)-31011;
unsigned char var_18 = (unsigned char)71;
long long int var_19 = -5521131073751345500LL;
long long int var_20 = 4352731960964124051LL;
unsigned long long int var_21 = 11746864940001282431ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
