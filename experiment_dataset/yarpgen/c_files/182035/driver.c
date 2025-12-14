#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-118;
long long int var_7 = 1325263880589374217LL;
unsigned long long int var_8 = 11820197372451885724ULL;
_Bool var_9 = (_Bool)1;
int var_15 = -1474832469;
short var_16 = (short)8384;
int zero = 0;
unsigned long long int var_17 = 17485937233624611408ULL;
unsigned int var_18 = 239024097U;
unsigned char var_19 = (unsigned char)203;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
