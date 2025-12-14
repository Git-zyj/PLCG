#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12128459491516285366ULL;
unsigned long long int var_3 = 1321199004052431870ULL;
signed char var_4 = (signed char)96;
signed char var_6 = (signed char)117;
unsigned int var_7 = 3569193035U;
signed char var_9 = (signed char)-34;
unsigned char var_11 = (unsigned char)187;
unsigned long long int var_12 = 14112723123322540440ULL;
int zero = 0;
signed char var_18 = (signed char)101;
unsigned short var_19 = (unsigned short)26696;
signed char var_20 = (signed char)-89;
long long int var_21 = 4259140497063542682LL;
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
