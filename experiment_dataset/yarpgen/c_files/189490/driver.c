#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 2158205695U;
long long int var_18 = -4726399851498833752LL;
int zero = 0;
long long int var_20 = 1630129414138146668LL;
signed char var_21 = (signed char)79;
int var_22 = 818241607;
unsigned int var_23 = 1163862074U;
signed char var_24 = (signed char)-38;
int arr_0 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -1092832754 : 1884426447;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
