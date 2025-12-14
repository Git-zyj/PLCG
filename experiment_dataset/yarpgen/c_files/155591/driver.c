#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 8566307162332272031LL;
signed char var_5 = (signed char)-18;
int var_13 = -155798112;
unsigned long long int var_15 = 555549226210166978ULL;
int zero = 0;
signed char var_16 = (signed char)47;
unsigned int var_17 = 27326220U;
long long int var_18 = 108352175044561268LL;
unsigned long long int var_19 = 16472696505578364743ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
