#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14341680624772734672ULL;
int var_2 = 1147072624;
_Bool var_6 = (_Bool)0;
short var_10 = (short)-27629;
unsigned char var_13 = (unsigned char)77;
signed char var_14 = (signed char)-89;
unsigned char var_15 = (unsigned char)13;
_Bool var_16 = (_Bool)0;
int zero = 0;
signed char var_19 = (signed char)18;
unsigned char var_20 = (unsigned char)156;
void init() {
}

void checksum() {
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
