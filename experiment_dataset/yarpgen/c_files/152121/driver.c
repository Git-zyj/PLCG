#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)43949;
unsigned long long int var_7 = 12680486892336492592ULL;
unsigned char var_9 = (unsigned char)169;
signed char var_17 = (signed char)-71;
int zero = 0;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)-123;
unsigned long long int var_21 = 13627927195230011090ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
