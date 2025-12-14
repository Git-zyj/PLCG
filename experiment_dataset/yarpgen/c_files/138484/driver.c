#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-27;
signed char var_6 = (signed char)-73;
signed char var_7 = (signed char)-53;
unsigned short var_11 = (unsigned short)27698;
int zero = 0;
long long int var_18 = 3008936026304123344LL;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)20385;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
