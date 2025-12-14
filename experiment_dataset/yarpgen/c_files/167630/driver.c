#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)71;
_Bool var_2 = (_Bool)0;
signed char var_4 = (signed char)102;
unsigned int var_6 = 1655821600U;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)111;
_Bool var_11 = (_Bool)1;
int var_12 = -315440631;
int zero = 0;
long long int var_13 = 1787410412618439583LL;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 24104639U;
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
