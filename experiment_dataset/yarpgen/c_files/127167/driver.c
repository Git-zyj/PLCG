#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5152104466632123516ULL;
unsigned long long int var_2 = 3827144665806483353ULL;
unsigned long long int var_3 = 14293920426147960134ULL;
unsigned long long int var_4 = 9122313020592978301ULL;
_Bool var_8 = (_Bool)1;
_Bool var_11 = (_Bool)1;
_Bool var_13 = (_Bool)1;
_Bool var_15 = (_Bool)0;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned long long int var_19 = 3034763099011585707ULL;
unsigned long long int var_20 = 16542816379492582479ULL;
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
