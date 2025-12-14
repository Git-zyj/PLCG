#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1335445880;
_Bool var_4 = (_Bool)1;
unsigned long long int var_7 = 13747674962523690073ULL;
signed char var_8 = (signed char)22;
int zero = 0;
signed char var_17 = (signed char)68;
unsigned int var_18 = 1427186187U;
unsigned int var_19 = 4086260319U;
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
