#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)117;
unsigned int var_2 = 3037350127U;
unsigned int var_5 = 3602978282U;
unsigned int var_6 = 4155324657U;
long long int var_7 = -7309050972066112613LL;
unsigned long long int var_9 = 17548029643766107440ULL;
int zero = 0;
unsigned long long int var_10 = 2655520527472749953ULL;
short var_11 = (short)-29651;
long long int var_12 = -17524500771485918LL;
signed char var_13 = (signed char)-29;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
