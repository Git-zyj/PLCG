#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)14228;
unsigned long long int var_3 = 3467501777656173631ULL;
int var_4 = -1307541347;
short var_5 = (short)21435;
unsigned long long int var_8 = 17095980190240823052ULL;
int var_11 = -1943754028;
int zero = 0;
signed char var_12 = (signed char)56;
unsigned int var_13 = 3070146266U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
