#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2430400797U;
unsigned long long int var_1 = 10615537048725805380ULL;
long long int var_2 = -1311095633668029916LL;
unsigned long long int var_3 = 1300688345499321597ULL;
long long int var_5 = -5526842001175138886LL;
int var_6 = -287758006;
unsigned int var_8 = 619152369U;
short var_10 = (short)31697;
long long int var_11 = 3619262068504419847LL;
int var_14 = 1113389759;
unsigned int var_17 = 906949704U;
int zero = 0;
long long int var_18 = -6371832731603144584LL;
unsigned short var_19 = (unsigned short)8492;
int var_20 = -1758379832;
short var_21 = (short)8174;
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
