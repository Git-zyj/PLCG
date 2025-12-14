#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)80;
short var_2 = (short)24932;
unsigned long long int var_3 = 11964907471602503097ULL;
long long int var_5 = -2116799245769151888LL;
signed char var_6 = (signed char)70;
unsigned long long int var_7 = 10563096933176530601ULL;
signed char var_9 = (signed char)-41;
unsigned long long int var_10 = 3551453928232054347ULL;
unsigned short var_11 = (unsigned short)5461;
unsigned int var_12 = 1792339980U;
unsigned int var_17 = 4137944370U;
int zero = 0;
unsigned short var_18 = (unsigned short)31115;
unsigned int var_19 = 2902130613U;
unsigned int var_20 = 924895301U;
signed char var_21 = (signed char)-90;
unsigned short var_22 = (unsigned short)19502;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
