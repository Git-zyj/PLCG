#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3736850868U;
signed char var_6 = (signed char)-76;
unsigned long long int var_7 = 6443825669378052504ULL;
unsigned long long int var_10 = 13509891137297800717ULL;
long long int var_16 = -4645893285890247011LL;
int zero = 0;
unsigned long long int var_19 = 14321679915018490741ULL;
long long int var_20 = -2570156321029743859LL;
signed char var_21 = (signed char)-35;
void init() {
}

void checksum() {
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
