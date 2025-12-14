#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)31449;
int var_1 = 1596382893;
unsigned long long int var_2 = 15120958754435301341ULL;
unsigned int var_3 = 2079380794U;
unsigned long long int var_4 = 10028161257616737943ULL;
long long int var_6 = -1723496153670122138LL;
unsigned int var_7 = 2725337695U;
short var_8 = (short)-27398;
long long int var_9 = 5285757526588789975LL;
int zero = 0;
long long int var_13 = 2301255462639670785LL;
int var_14 = -64581199;
signed char var_15 = (signed char)23;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
