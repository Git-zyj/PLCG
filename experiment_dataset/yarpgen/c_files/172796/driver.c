#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6522493068153811787LL;
unsigned long long int var_1 = 15433853798579556417ULL;
unsigned long long int var_2 = 16260921433790371144ULL;
long long int var_5 = 4248921840752845847LL;
signed char var_9 = (signed char)-21;
unsigned char var_11 = (unsigned char)151;
int var_15 = -1341949297;
unsigned long long int var_19 = 13159991273819564571ULL;
int zero = 0;
unsigned long long int var_20 = 3433836188565890888ULL;
unsigned int var_21 = 688809051U;
_Bool var_22 = (_Bool)0;
unsigned int var_23 = 2791677320U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
