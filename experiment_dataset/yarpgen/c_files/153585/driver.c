#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)14383;
unsigned char var_5 = (unsigned char)56;
signed char var_7 = (signed char)-4;
unsigned long long int var_8 = 16699564632226369077ULL;
int zero = 0;
signed char var_10 = (signed char)59;
long long int var_11 = 3006996119092565672LL;
long long int var_12 = -1015294267842431349LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
