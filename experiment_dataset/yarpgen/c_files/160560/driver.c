#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12560915108835362452ULL;
long long int var_3 = -881578704299972357LL;
int var_5 = 729669647;
unsigned long long int var_6 = 3047786645448490119ULL;
signed char var_9 = (signed char)-118;
int zero = 0;
long long int var_14 = 4660636326039854271LL;
unsigned short var_15 = (unsigned short)33050;
void init() {
}

void checksum() {
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
