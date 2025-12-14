#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5140027878018279522LL;
int var_2 = 444491980;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)104;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)13105;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned int var_10 = 1906151203U;
unsigned long long int var_11 = 1885444215379392222ULL;
long long int var_12 = -2831628323665818251LL;
unsigned int var_13 = 1665127471U;
unsigned short var_14 = (unsigned short)22547;
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
