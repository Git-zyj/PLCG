#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13532863659306061163ULL;
unsigned int var_3 = 4237204711U;
int var_4 = -1574404136;
unsigned long long int var_7 = 18149958449339557136ULL;
_Bool var_18 = (_Bool)1;
int zero = 0;
long long int var_19 = -2420837562279415281LL;
int var_20 = -362209016;
int var_21 = -179874588;
signed char var_22 = (signed char)-79;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
