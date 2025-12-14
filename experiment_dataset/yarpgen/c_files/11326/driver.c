#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 4862902216915561526LL;
short var_8 = (short)-29063;
unsigned short var_10 = (unsigned short)55938;
int zero = 0;
unsigned long long int var_19 = 17294508050673732707ULL;
signed char var_20 = (signed char)-1;
signed char var_21 = (signed char)63;
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
