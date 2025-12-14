#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)9586;
long long int var_3 = -6164044172589799026LL;
unsigned long long int var_5 = 11632496377152615108ULL;
long long int var_7 = 1902053868840329228LL;
signed char var_8 = (signed char)14;
unsigned long long int var_9 = 2290499948907369235ULL;
unsigned int var_11 = 82214068U;
unsigned short var_15 = (unsigned short)29253;
int zero = 0;
signed char var_20 = (signed char)-113;
short var_21 = (short)13440;
unsigned short var_22 = (unsigned short)54460;
void init() {
}

void checksum() {
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
