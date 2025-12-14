#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)3591;
short var_3 = (short)-6776;
long long int var_4 = 4881672437858288326LL;
short var_6 = (short)-20060;
long long int var_7 = 2539570906806169531LL;
unsigned long long int var_10 = 2038176386312652169ULL;
long long int var_11 = -6779270417696787296LL;
signed char var_12 = (signed char)-76;
long long int var_13 = 1621432016150483325LL;
long long int var_14 = -4870699021780745180LL;
unsigned long long int var_15 = 2285069237402020833ULL;
long long int var_18 = 689092717077460743LL;
short var_19 = (short)25013;
int zero = 0;
signed char var_20 = (signed char)66;
long long int var_21 = 7404962064490664705LL;
signed char var_22 = (signed char)95;
long long int var_23 = 8228828837408677341LL;
void init() {
}

void checksum() {
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
