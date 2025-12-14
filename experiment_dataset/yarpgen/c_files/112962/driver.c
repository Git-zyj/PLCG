#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-29;
unsigned int var_2 = 3788169694U;
long long int var_5 = -6598807079364789442LL;
_Bool var_6 = (_Bool)1;
_Bool var_8 = (_Bool)1;
int zero = 0;
int var_12 = 1679366446;
unsigned long long int var_13 = 10828230767629661650ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
