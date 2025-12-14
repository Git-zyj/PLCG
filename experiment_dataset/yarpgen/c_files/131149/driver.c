#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)21536;
unsigned short var_3 = (unsigned short)58882;
long long int var_4 = -4051860197288054106LL;
long long int var_5 = 7634194023187540531LL;
unsigned short var_8 = (unsigned short)13181;
signed char var_13 = (signed char)125;
unsigned long long int var_15 = 15591216168431429979ULL;
unsigned short var_16 = (unsigned short)21095;
signed char var_18 = (signed char)93;
unsigned long long int var_19 = 14450266644446181237ULL;
int zero = 0;
signed char var_20 = (signed char)55;
signed char var_21 = (signed char)-60;
signed char var_22 = (signed char)-113;
signed char var_23 = (signed char)36;
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
