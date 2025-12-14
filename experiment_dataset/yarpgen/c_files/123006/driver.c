#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8131593170683849944LL;
unsigned short var_2 = (unsigned short)50978;
unsigned long long int var_3 = 12777049875281683366ULL;
long long int var_4 = 6107806115336953642LL;
_Bool var_5 = (_Bool)0;
long long int var_6 = 8340366086777665294LL;
unsigned short var_7 = (unsigned short)72;
_Bool var_9 = (_Bool)0;
int zero = 0;
long long int var_10 = 7170699387197295246LL;
unsigned short var_11 = (unsigned short)64914;
long long int var_12 = 4894882483854929433LL;
unsigned int var_13 = 2969304364U;
unsigned int var_14 = 29547630U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
