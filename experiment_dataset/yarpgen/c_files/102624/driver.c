#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5885233335774248778LL;
signed char var_3 = (signed char)-114;
short var_8 = (short)17034;
unsigned char var_9 = (unsigned char)170;
unsigned long long int var_12 = 4969018821346029800ULL;
unsigned char var_13 = (unsigned char)98;
unsigned long long int var_16 = 5815681651236809849ULL;
signed char var_17 = (signed char)-118;
int zero = 0;
unsigned int var_18 = 230502269U;
short var_19 = (short)-31246;
unsigned long long int var_20 = 7011727046713372727ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
