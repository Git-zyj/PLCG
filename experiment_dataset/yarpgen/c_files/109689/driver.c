#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 14236031927715362583ULL;
_Bool var_6 = (_Bool)0;
_Bool var_8 = (_Bool)0;
long long int var_11 = 3616293457706207515LL;
long long int var_12 = 6701243633991401820LL;
int zero = 0;
long long int var_13 = 6751529902506489986LL;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-74;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
