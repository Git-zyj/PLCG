#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -229009655;
unsigned int var_3 = 3128024228U;
unsigned long long int var_7 = 12046400164778781690ULL;
unsigned long long int var_13 = 11060253252756087843ULL;
int zero = 0;
unsigned long long int var_19 = 14200538207735102313ULL;
long long int var_20 = 4571568124445692736LL;
unsigned int var_21 = 994774858U;
signed char var_22 = (signed char)47;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
