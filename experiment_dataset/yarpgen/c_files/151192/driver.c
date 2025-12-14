#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-67;
_Bool var_4 = (_Bool)0;
signed char var_6 = (signed char)-51;
int var_12 = 313663569;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned long long int var_19 = 11502597201601785670ULL;
long long int var_20 = 6729766391657494453LL;
signed char var_21 = (signed char)57;
unsigned long long int var_22 = 9494269993594272043ULL;
long long int var_23 = 8330530308859078542LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
