#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2348263066U;
signed char var_6 = (signed char)7;
unsigned long long int var_9 = 918931444364549444ULL;
short var_10 = (short)-25577;
long long int var_11 = 2879000386604014340LL;
short var_12 = (short)-2332;
int zero = 0;
signed char var_14 = (signed char)-118;
unsigned long long int var_15 = 18358076075401654666ULL;
unsigned long long int var_16 = 15884046837144909ULL;
unsigned int var_17 = 1838110313U;
signed char var_18 = (signed char)-103;
signed char arr_0 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-45;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
