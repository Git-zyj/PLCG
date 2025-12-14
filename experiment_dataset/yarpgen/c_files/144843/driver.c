#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8725513588086881426LL;
long long int var_2 = -3745801450147685380LL;
long long int var_6 = -41420275741905766LL;
long long int var_10 = 2871981961591118182LL;
long long int var_11 = 6697437735393323222LL;
long long int var_13 = -6303844241805845188LL;
long long int var_15 = -492923453557794001LL;
long long int var_16 = -595053400402857113LL;
int zero = 0;
long long int var_17 = -6584566014515106294LL;
long long int var_18 = -5187337738139114063LL;
long long int var_19 = 3875318557523734969LL;
long long int var_20 = 4221060182321306629LL;
long long int var_21 = -8840243269004415911LL;
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
