#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-124;
unsigned int var_1 = 2244078351U;
short var_2 = (short)-12130;
unsigned long long int var_3 = 14066722838210996009ULL;
unsigned long long int var_4 = 12512262659632110834ULL;
unsigned char var_7 = (unsigned char)31;
unsigned int var_9 = 236632207U;
int zero = 0;
unsigned int var_10 = 2881916519U;
unsigned int var_11 = 2922132264U;
unsigned int var_12 = 1433020157U;
unsigned long long int var_13 = 15640373120019247961ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
