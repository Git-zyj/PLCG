#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-81;
long long int var_6 = 4170031747290451484LL;
unsigned int var_7 = 3666878397U;
long long int var_9 = -3865978929445499122LL;
int zero = 0;
unsigned char var_18 = (unsigned char)157;
signed char var_19 = (signed char)11;
void init() {
}

void checksum() {
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
