#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 507516588483395524ULL;
signed char var_1 = (signed char)-29;
short var_3 = (short)-30025;
unsigned short var_6 = (unsigned short)65335;
long long int var_7 = 4767033238624974260LL;
long long int var_9 = 7974930672744725111LL;
int zero = 0;
signed char var_11 = (signed char)47;
int var_12 = -1446077613;
long long int var_13 = 9048241201761120534LL;
unsigned char var_14 = (unsigned char)16;
signed char arr_1 [17] ;
long long int arr_2 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (signed char)66;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 2028615053349141599LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
