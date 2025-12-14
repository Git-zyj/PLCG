#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -6607764659663868318LL;
int var_5 = -1538899688;
unsigned short var_6 = (unsigned short)59467;
unsigned int var_9 = 2609968967U;
short var_14 = (short)27293;
int zero = 0;
int var_18 = -870489446;
unsigned short var_19 = (unsigned short)62531;
unsigned short var_20 = (unsigned short)15738;
unsigned long long int var_21 = 15785700134500506786ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
