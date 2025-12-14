#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 17052773617189863411ULL;
signed char var_7 = (signed char)-66;
int var_8 = 1927514988;
signed char var_10 = (signed char)-104;
unsigned long long int var_11 = 10720631244396091548ULL;
int var_13 = 287148608;
int zero = 0;
int var_14 = 351083823;
long long int var_15 = -5302342682194944217LL;
int var_16 = -1075566701;
unsigned long long int var_17 = 7616671543639311424ULL;
long long int var_18 = -6595160125191217943LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
