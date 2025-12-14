#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62038;
unsigned short var_1 = (unsigned short)12428;
int var_2 = -1441821268;
long long int var_6 = -8331846342892811081LL;
long long int var_7 = 8617050075380093349LL;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)57;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 12607353149111236236ULL;
long long int var_13 = 8671393551974432441LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
